/* LEVEL_17:0x0B29F0 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_00268500[];
extern int func_0A8998(int *v);
extern unsigned int func_07A030(int value);
extern int func_0A4590(int index);
extern int func_0AB4E8(void);
extern void func_018518(int a, int b);
extern int func_0A7C38(int *o, int arg);

void func_0B29F0(void)
{
    unsigned int flags;

    func_0A8998(D_00268500);
    flags = func_07A030(0x6B10);
    if (flags & 8) {
        func_0A4590(7);
        func_0A4590(0);
        func_018518(4, 0);
    } else if (flags & 0x1000) {
        func_0A4590(7);
        func_0A4590(0);
        if (!func_0AB4E8()) {
            func_018518(4, 0);
        }
    } else {
        func_0A7C38(D_00268500, flags);
    }
}
