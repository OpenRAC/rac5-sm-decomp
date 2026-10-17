extern void __do_global_dtors(void);
extern void _cleanup(void);
extern void _exit(int status);

void exit(int status) {
    __do_global_dtors();
    _cleanup();
    _exit(status);
}
