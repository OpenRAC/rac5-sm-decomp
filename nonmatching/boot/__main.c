extern int __main_initialized;
extern void __do_global_ctors(void);

void __main(void) {
    if (!__main_initialized) {
        __main_initialized = 1;
        __do_global_ctors();
    }
}
