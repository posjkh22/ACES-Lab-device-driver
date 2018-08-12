cmd_/home/pi/gpioled/gpio_module.ko := ld -EL -r  -T ./scripts/module-common.lds --build-id  -o /home/pi/gpioled/gpio_module.ko /home/pi/gpioled/gpio_module.o /home/pi/gpioled/gpio_module.mod.o
