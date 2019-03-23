#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("KAIGE");

static int scull_init(void)
{
	printk(KERN_EMERG,"HELL0 WORLD ENTER! \n");
	return 0;
}
static void scull_exit(void)
{
	printk(KERN_EMERG,"HELL0 WORLD exit! \n");
}

module_init(scull_init);
module_exit(scull_exit);
