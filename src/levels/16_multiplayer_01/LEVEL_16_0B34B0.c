/* LEVEL_16:0x0B34B0 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_00277200[];
extern int func_0A9458(int *v);
extern unsigned int func_0795B8(int value);
extern int func_0A50B0(int index);
extern int func_0ABFA8(void);
extern void func_018B98(int a, int b);
extern int func_0A86F8(int *o, int arg);

void func_0B34B0(void)
{
    unsigned int flags;

    func_0A9458(D_00277200);
    flags = func_0795B8(0x6B10);
    if (flags & 8) {
        func_0A50B0(7);
        func_0A50B0(0);
        func_018B98(4, 0);
    } else if (flags & 0x1000) {
        func_0A50B0(7);
        func_0A50B0(0);
        if (!func_0ABFA8()) {
            func_018B98(4, 0);
        }
    } else {
        func_0A86F8(D_00277200, flags);
    }
}
