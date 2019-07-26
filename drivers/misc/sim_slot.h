#ifdef CONFIG_CHECK_SIMSLOT_COUNT

#include <linux/proc_fs.h>
#include <linux/i2c-gpio.h>
#include <asm/gpio.h>

enum
{
        NO_SIM = 0,
        SINGLE_SIM,
        DUAL_SIM,
        TRIPLE_SIM
};

#endif
