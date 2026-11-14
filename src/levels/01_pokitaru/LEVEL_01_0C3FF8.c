/* LEVEL_01:0x0C3FF8 -- prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_003292C0[];
extern int func_0BA408(int *v);
extern unsigned int func_088020(int value);
extern int func_0B6020(int index);
extern int func_0BCB20(void);
extern void func_01A828(int a, int b);
extern int func_0B96A8(int *o, int arg);

void func_0C3FF8(void)
{
    unsigned int flags;

    func_0BA408(D_003292C0);
    flags = func_088020(0x6B10);
    if (flags & 8) {
        func_0B6020(7);
        func_0B6020(0);
        func_01A828(4, 0);
    } else if (flags & 0x1000) {
        func_0B6020(7);
        func_0B6020(0);
        if (!func_0BCB20()) {
            func_01A828(4, 0);
        }
    } else {
        func_0B96A8(D_003292C0, flags);
    }
}
