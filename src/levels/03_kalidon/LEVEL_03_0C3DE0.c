/* LEVEL_03:0x0C3DE0 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_00344140[];
extern int func_0BA1F0(int *v);
extern unsigned int func_087E78(int value);
extern int func_0B5E08(int index);
extern int func_0BC908(void);
extern void func_01A590(int a, int b);
extern int func_0B9490(int *o, int arg);

void func_0C3DE0(void)
{
    unsigned int flags;

    func_0BA1F0(D_00344140);
    flags = func_087E78(0x6B10);
    if (flags & 8) {
        func_0B5E08(7);
        func_0B5E08(0);
        func_01A590(4, 0);
    } else if (flags & 0x1000) {
        func_0B5E08(7);
        func_0B5E08(0);
        if (!func_0BC908()) {
            func_01A590(4, 0);
        }
    } else {
        func_0B9490(D_00344140, flags);
    }
}
