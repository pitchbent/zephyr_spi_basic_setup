#include <zephyr/device.h>
#include <zephyr/toolchain.h>

/* 1 : /soc/ccm@400fc000:
 * Supported:
 *    - /soc/dma-controller@400e8000
 *    - /soc/uart@40184000
 *    - /soc/spi@40394000
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_60[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 2, 3, 8, DEVICE_HANDLE_ENDS };

/* 2 : /soc/dma-controller@400e8000:
 * Direct Dependencies:
 *    - /soc/ccm@400fc000
 * Supported:
 *    - /soc/uart@40184000
 *    - /soc/spi@40394000
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_114[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 3, 8, DEVICE_HANDLE_ENDS };

/* 3 : /soc/uart@40184000:
 * Direct Dependencies:
 *    - /soc/ccm@400fc000
 *    - /soc/dma-controller@400e8000
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_127[] = { 1, 2, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 4 : /soc/gpio@400c0000:
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_17[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 5 : /soc/gpio@401c0000:
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_313[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 6 : /soc/gpio@401bc000:
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_98[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 7 : /soc/gpio@401b8000:
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_52[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 8 : /soc/spi@40394000:
 * Direct Dependencies:
 *    - /soc/ccm@400fc000
 *    - /soc/dma-controller@400e8000
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_283[] = { 1, 2, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };
