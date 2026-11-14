/* LEVEL_06:0x0BE8F8 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_00316040[];
extern int func_0B4D08(int *v);
extern unsigned int func_080E98(int value);
extern int func_0B0848(int index);
extern int func_0B7420(void);
extern void func_019028(int a, int b);
extern int func_0B3FA8(int *o, int arg);

void func_0BE8F8(void)
{
    unsigned int flags;

    func_0B4D08(D_00316040);
    flags = func_080E98(0x6B10);
    if (flags & 8) {
        func_0B0848(7);
        func_0B0848(0);
        func_019028(4, 0);
    } else if (flags & 0x1000) {
        func_0B0848(7);
        func_0B0848(0);
        if (!func_0B7420()) {
            func_019028(4, 0);
        }
    } else {
        func_0B3FA8(D_00316040, flags);
    }
}
