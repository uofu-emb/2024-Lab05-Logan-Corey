#include <stdio.h>
#include <pico/stdlib.h>

int main(void)
{
    int toggle = 0;
    stdio_init_all();
    gpio_init(OUT_PIN);
    gpio_set_dir(OUT_PIN, GPIO_OUT);
    gpio_put(OUT_PIN, toggle);

    while (true) {
        toggle = !toggle;
        gpio_put(OUT_PIN, toggle);

        // Busy wait
        for (int i = 0; i < 100000; i++) {
            __asm__ volatile ("" : : : "memory"); // Prevent from optimizing out
        }

        sleep_ms(DELAY_MS);
    }
}
