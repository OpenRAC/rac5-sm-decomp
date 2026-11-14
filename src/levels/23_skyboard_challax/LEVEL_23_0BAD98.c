/* LEVEL_23:0x0BAD98 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_002FA700[];
extern int func_0B11A0(int *v);
extern unsigned int func_07DEE0(int value);
extern int func_0ACDE8(int index);
extern int func_0B38C0(void);
extern void func_019338(int a, int b);
extern int func_0B0440(int *o, int arg);

void func_0BAD98(void)
{
    unsigned int flags;

    func_0B11A0(D_002FA700);
    flags = func_07DEE0(0x6B10);
    if (flags & 8) {
        func_0ACDE8(7);
        func_0ACDE8(0);
        func_019338(4, 0);
    } else if (flags & 0x1000) {
        func_0ACDE8(7);
        func_0ACDE8(0);
        if (!func_0B38C0()) {
            func_019338(4, 0);
        }
    } else {
        func_0B0440(D_002FA700, flags);
    }
}
