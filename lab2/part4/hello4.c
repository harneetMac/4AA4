#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#define DRIVER_AUTHOR "Adam+Harneet"
#define DRIVER_DESC "4AA4 Lab2 Part3"

static char *my_name = "harneet";

static int __init init_custom_module(void)
{
    printk (KERN_INFO  "Hello dummy world %s\n", my_name);
    return 0;
}

static void __exit cleanup_custom_module(void)
{
    printk (KERN_INFO "Goodbye, %s\n", my_name);
}

module_init(init_custom_module);
module_exit(cleanup_custom_module);

module_param(my_name, charp, 0000);
MODULE_PARM_DESC(my_name, "Your name string");

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
