/* LEVEL_18:0x0B2488 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_00277580[];
extern int func_0A8430(int *v);
extern unsigned int func_078F38(int value);
extern int func_0A40A8(int index);
extern int func_0AAF80(void);
extern void func_0181E0(int a, int b);
extern int func_0A76D0(int *o, int arg);

void func_0B2488(void)
{
    unsigned int flags;

    func_0A8430(D_00277580);
    flags = func_078F38(0x6B10);
    if (flags & 8) {
        func_0A40A8(7);
        func_0A40A8(0);
        func_0181E0(4, 0);
    } else if (flags & 0x1000) {
        func_0A40A8(7);
        func_0A40A8(0);
        if (!func_0AAF80()) {
            func_0181E0(4, 0);
        }
    } else {
        func_0A76D0(D_00277580, flags);
    }
}
