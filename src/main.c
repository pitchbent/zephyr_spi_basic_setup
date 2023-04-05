#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>
#include <zephyr/drivers/spi.h>
#include <zephyr/drivers/gpio.h>

#define SPI_DEV DT_COMPAT_GET_ANY_STATUS_OKAY(test)
#define SPI_OP SPI_OP_MODE_MASTER | SPI_MODE_CPOL | SPI_MODE_CPHA | SPI_WORD_SET(8) | SPI_LINES_SINGLE

uint8_t my_buffer[4] = {1, 0, 1, 0};
uint8_t ret;
struct spi_buf my_spi_buffer[1];
const struct spi_buf_set tx_buff = {my_spi_buffer, 1};

struct spi_dt_spec spi_com = SPI_DT_SPEC_GET(SPI_DEV, SPI_OP, 0);

void main(void)
{

    printk("Hi");
    my_spi_buffer[0].buf = my_buffer;
    my_spi_buffer[0].len = 4;

    while (true)
    {

        ret = spi_write_dt(&spi_com, &tx_buff);

        if (ret)
        {
            printk("spi write failed");
            break;
        }
    }
}