
#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */

int init_module(void)
{
	printk(KERN_INFO "#### Hello world 1.\n");
	pr_info("#### pr_info Hello world!\n"); 
	/* 
	 * A non 0 return means init_module failed; module can't be loaded. 
	 */
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "#### Goodbye world 1.\n");
	pr_info("#### pr_info Goodbye world !\n"); 
}

// TODO doesnt work
// module_init(init_module); 
// module_exit(cleanup_module); 
MODULE_AUTHOR("Find Me dev@kernel.org");
MODULE_LICENSE("MIT");