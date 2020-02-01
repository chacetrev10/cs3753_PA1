#include <linux/kernel.h>
#include <linux/linkage.h>
#include <linux/uaccess.h>
asmlinkage long sys_cs3753_add(int i1, int i2, int *res){
	int a = i1+i2;
	printk(KERN_ALERT "First number = %d", i1);
	printk(KERN_ALERT "Second number = %d", i2);
	printk(KERN_ALERT "First +second = %d", a);
	copy_to_user(res, &a, sizeof a);
	return 0;
}
