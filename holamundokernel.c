#include <linux/module.h> /* Necesario por todos los modulos */
#include <linux/kernel.h> /* Alertas e informacion */
#include <linux.init.h> /*Necesario para las macros init y exit*/
static init_init inicio(void)
{
	printk(KERN_INFO "Hola Mundo!.\n");
	/* 
	* Si no re regresa 0, significa que el modulo no pudo ser cargado. 
	*/
	return 0;
}
static void_exit fin(void)
{
	printk(KERN_INFO "Adios Mundo\n");
}
module_init(inicio);
module_exit(fin);
