/* LEVEL_04:0x0C9810 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_00343AC0[];
extern int func_0BFBE8(int *v);
extern unsigned int func_08B2B8(int value);
extern int func_0BB828(int index);
extern int func_0C2338(void);
extern void func_01A4A8(int a, int b);
extern int func_0BEE88(int *o, int arg);

void func_0C9810(void)
{
    unsigned int flags;

    func_0BFBE8(D_00343AC0);
    flags = func_08B2B8(0x6B10);
    if (flags & 8) {
        func_0BB828(7);
        func_0BB828(0);
        func_01A4A8(4, 0);
    } else if (flags & 0x1000) {
        func_0BB828(7);
        func_0BB828(0);
        if (!func_0C2338()) {
            func_01A4A8(4, 0);
        }
    } else {
        func_0BEE88(D_00343AC0, flags);
    }
}
