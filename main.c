#define MODULE
#define LINUX
#define __KERNEL__

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init init_hello(void) {
    printk(KERN_ALERT "Custom kernel module successfully loaded\n");
    return 0;
}

static void __exit cleanup_hello(void) {
}

module_init(init_hello);
module_exit(cleanup_hello);
MODULE_LICENSE("GPL");