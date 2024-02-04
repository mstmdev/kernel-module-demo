#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL v2");

static int __init

hello_init(void) {
    printk(KERN_INFO
    "Hello, my first kernel module!\n");
    return 0;
}

static void __exit

hello_exit(void) {
    printk(KERN_INFO
    "Goodbye, my first kernel module!\n");
}

module_init(hello_init);
module_exit(hello_exit);
