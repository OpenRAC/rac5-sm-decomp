/* LEVEL_02:0x0CA908 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_003407C0[];
extern int func_0C0D18(int *v);
extern unsigned int func_08E950(int value);
extern int func_0BC930(int index);
extern int func_0C3430(void);
extern void func_01B188(int a, int b);
extern int func_0BFFB8(int *o, int arg);

void func_0CA908(void)
{
    unsigned int flags;

    func_0C0D18(D_003407C0);
    flags = func_08E950(0x6B10);
    if (flags & 8) {
        func_0BC930(7);
        func_0BC930(0);
        func_01B188(4, 0);
    } else if (flags & 0x1000) {
        func_0BC930(7);
        func_0BC930(0);
        if (!func_0C3430()) {
            func_01B188(4, 0);
        }
    } else {
        func_0BFFB8(D_003407C0, flags);
    }
}
