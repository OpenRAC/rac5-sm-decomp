/* kprintf 0x01ED33E0 -- kernel kprintf variant: disables interrupts around the formatted output to the console callback. */
typedef void *va_list;
#define va_start(AP, LASTARG) \
    (AP = ((va_list) __builtin_next_arg(LASTARG) - 0x38))

extern int DIntr(void);
extern int EIntr(void);
extern int func_01ED25A8(int (*put)(void), void *ctx, unsigned int limit, const char *fmt, void *args);
extern int func_01ED32E8(void);

void kprintf(const char *fmt, ...) {
    va_list ap;
    int ctx[2];
    int was;

    ctx[0] = 0;
    was = DIntr();
    va_start(ap, fmt);
    func_01ED25A8(func_01ED32E8, ctx, 0xFFFFFFFFu, fmt, ap);
    if (was != 0) EIntr();
}
