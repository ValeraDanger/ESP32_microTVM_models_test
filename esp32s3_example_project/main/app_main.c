#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "esp_log.h"
#include "esp_system.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_timer.h"
#include "input_data.h"
#include "output_data.h"
#include "tvmgen_default.h"
#include "esp_kernel.h"


static const char *TAG = "APP_MODEL";

static void inference_task()
{
    struct tvmgen_default_inputs inputs = {
      .input_1 = input_data,
    };
    struct tvmgen_default_outputs outputs = {
      .output = output_data,
    };

    uint64_t elapsed_time = 0;

    uint64_t time1, time2;
    time1 = esp_timer_get_time();
    int ret_val = tvmgen_default_run(&inputs, &outputs);
    time2 = esp_timer_get_time();
    elapsed_time = time2 - time1;
    printf("\ntime: %lld us\n", elapsed_time);

    // for(int i=0; i<output_len; i++){
    //     printf("%f, ", output_data[i]);
    // }
    // printf("\n");

    printf("\n");
    printf("\tDescription\tInternal\tSPIRAM\n");
    printf("Current Free Memory\t%d\t\t%d\n",
           heap_caps_get_free_size(MALLOC_CAP_8BIT) - heap_caps_get_free_size(MALLOC_CAP_SPIRAM),
           heap_caps_get_free_size(MALLOC_CAP_SPIRAM));
    printf("Largest Free Block\t%d\t\t%d\n",
           heap_caps_get_largest_free_block(MALLOC_CAP_8BIT | MALLOC_CAP_INTERNAL),
           heap_caps_get_largest_free_block(MALLOC_CAP_SPIRAM));
    printf("Min. Ever Free Size\t%d\t\t%d\n",
           heap_caps_get_minimum_free_size(MALLOC_CAP_8BIT | MALLOC_CAP_INTERNAL),
           heap_caps_get_minimum_free_size(MALLOC_CAP_SPIRAM));
    
    while (1)
    {
        vTaskDelay(10 / portTICK_PERIOD_MS);
    }
}


void app_main()
{
    xTaskCreatePinnedToCore(inference_task, TAG, 4 * 1024, NULL, 6, NULL, 0);
}