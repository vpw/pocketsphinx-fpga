#ifndef __PLATFORM_CONFIG_H_
#define __PLATFORM_CONFIG_H_

#define STDOUT_IS_16550
#define STDOUT_BASEADDR XPAR_RS232_UART_0_BASEADDR
#ifdef __PPC__
#define CACHEABLE_REGION_MASK 0xffffffff80300080
#endif

#endif