/* LEVEL_07:0x0C6058 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_0033EBC0[];
extern int func_0BC468(int *v);
extern unsigned int func_08A0F0(int value);
extern int func_0B8080(int index);
extern int func_0BEB80(void);
extern void func_01AEE8(int a, int b);
extern int func_0BB708(int *o, int arg);

void func_0C6058(void)
{
    unsigned int flags;

    func_0BC468(D_0033EBC0);
    flags = func_08A0F0(0x6B10);
    if (flags & 8) {
        func_0B8080(7);
        func_0B8080(0);
        func_01AEE8(4, 0);
    } else if (flags & 0x1000) {
        func_0B8080(7);
        func_0B8080(0);
        if (!func_0BEB80()) {
            func_01AEE8(4, 0);
        }
    } else {
        func_0BB708(D_0033EBC0, flags);
    }
}
