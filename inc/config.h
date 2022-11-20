#ifndef _CONFIG_H_
#define _CONFIG_H_

//#define USING_XILINX_INTERNEL_SIGN
#define USING_AUTOX_SIGN_SERVER

#if defined(USING_XILINX_INTERNEL_SIGN) && defined(USING_AUTOX_SIGN_SERVER)
#error "Only one mode can be defined"
#endif /* USING_AUTOX_SIGN_SERVER && USING_AUTOX_SIGN_SERVER */

#endif /* _CONFIG_H_ */