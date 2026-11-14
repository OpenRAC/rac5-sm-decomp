/* LEVEL_19:0x0B2D88 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_00277380[];
extern int func_0A8D30(int *v);
extern unsigned int func_079AA0(int value);
extern int func_0A4928(int index);
extern int func_0AB880(void);
extern void func_018898(int a, int b);
extern int func_0A7FD0(int *o, int arg);

void func_0B2D88(void)
{
    unsigned int flags;

    func_0A8D30(D_00277380);
    flags = func_079AA0(0x6B10);
    if (flags & 8) {
        func_0A4928(7);
        func_0A4928(0);
        func_018898(4, 0);
    } else if (flags & 0x1000) {
        func_0A4928(7);
        func_0A4928(0);
        if (!func_0AB880()) {
            func_018898(4, 0);
        }
    } else {
        func_0A7FD0(D_00277380, flags);
    }
}
