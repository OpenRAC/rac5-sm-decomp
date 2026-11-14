/* LEVEL_09:0x0C12A8 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_00310A40[];
extern int func_0B76B8(int *v);
extern unsigned int func_0849D8(int value);
extern int func_0B32D0(int index);
extern int func_0B9DD0(void);
extern void func_019C18(int a, int b);
extern int func_0B6958(int *o, int arg);

void func_0C12A8(void)
{
    unsigned int flags;

    func_0B76B8(D_00310A40);
    flags = func_0849D8(0x6B10);
    if (flags & 8) {
        func_0B32D0(7);
        func_0B32D0(0);
        func_019C18(4, 0);
    } else if (flags & 0x1000) {
        func_0B32D0(7);
        func_0B32D0(0);
        if (!func_0B9DD0()) {
            func_019C18(4, 0);
        }
    } else {
        func_0B6958(D_00310A40, flags);
    }
}
