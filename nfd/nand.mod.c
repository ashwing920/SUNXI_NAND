#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa91f1a0d, "module_layout" },
	{ 0x8a21e5de, "blk_init_queue" },
	{ 0x63ec6978, "kmalloc_caches" },
	{ 0x383e8a27, "gpio_request_ex" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x45cfb53b, "alloc_disk" },
	{ 0xdf5fe5aa, "sw_dma_set_buffdone_fn" },
	{ 0x2b688622, "complete_and_exit" },
	{ 0x99531d60, "sw_dma_request" },
	{ 0x367132, "blk_cleanup_queue" },
	{ 0x577b41e0, "mem_map" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5679d4cf, "page_address" },
	{ 0x5f2338f6, "elevator_change" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xa8cde9a7, "remove_wait_queue" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xf8343b41, "sw_dma_enqueue" },
	{ 0x21fe2bec, "filp_close" },
	{ 0x6ccf7bd7, "__pv_phys_offset" },
	{ 0x63b87fc5, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5baaba0, "wait_for_completion" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x8692a004, "down_trylock" },
	{ 0x27e1a049, "printk" },
	{ 0xc58e038f, "del_gendisk" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xcea899ea, "down" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x1b3d4c45, "platform_driver_register" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xdf36c8d0, "module_put" },
	{ 0xd1ad24e6, "kmem_cache_alloc" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x2401e1d2, "___dma_page_cpu_to_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0xbeae78f2, "put_disk" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x2a3ada94, "___dma_page_dev_to_cpu" },
	{ 0xad237450, "blk_fetch_request" },
	{ 0x3f4f7603, "__blk_end_request_all" },
	{ 0x84c41780, "script_parser_fetch" },
	{ 0xb9e52429, "__wake_up" },
	{ 0xb03a860d, "sw_dma_config" },
	{ 0xfe634f58, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0x81bd62a0, "add_disk" },
	{ 0x364b3fff, "up" },
	{ 0x4dbb4ee6, "sw_dma_setflags" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb81960ca, "snprintf" },
	{ 0x71997009, "platform_driver_unregister" },
	{   0x6b70, "try_module_get" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xe03951c4, "set_disk_ro" },
	{ 0xfe6700b8, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

