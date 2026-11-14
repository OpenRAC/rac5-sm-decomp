/* LEVEL_22:0x0B24A8 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_0027EE80[];
extern int func_0A88B0(int *v);
extern unsigned int func_079438(int value);
extern int func_0A4570(int index);
extern int func_0AAFD0(void);
extern void func_016E40(int a, int b);
extern int func_0A7B50(int *o, int arg);

void func_0B24A8(void)
{
    unsigned int flags;

    func_0A88B0(D_0027EE80);
    flags = func_079438(0x6B10);
    if (flags & 8) {
        func_0A4570(7);
        func_0A4570(0);
        func_016E40(4, 0);
    } else if (flags & 0x1000) {
        func_0A4570(7);
        func_0A4570(0);
        if (!func_0AAFD0()) {
            func_016E40(4, 0);
        }
    } else {
        func_0A7B50(D_0027EE80, flags);
    }
}
