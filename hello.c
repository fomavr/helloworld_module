#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Nikita Fomin aka fomavr");
MODULE_VERSION("0.1.0");
MODULE_DESCRIPTION("My simple helloworld module");

static int __init hello_init(void){
    printk(KERN_INFO "Hello, world! I'm first module!\n");
    return 0;
}

static void __exit hello_exit(void){
    printk(KERN_INFO "Goodbye, Kernel...\n");
}

module_init(hello_init);
module_exit(hello_exit);