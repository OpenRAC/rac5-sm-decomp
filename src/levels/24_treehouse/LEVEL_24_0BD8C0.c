/* LEVEL_24:0x0BD8C0 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_002F5180[];
extern int func_0B3C98(int *v);
extern unsigned int func_0812C0(int value);
extern int func_0AF8B0(int index);
extern int func_0B63E8(void);
extern void func_018E18(int a, int b);
extern int func_0B2F38(int *o, int arg);

void func_0BD8C0(void)
{
    unsigned int flags;

    func_0B3C98(D_002F5180);
    flags = func_0812C0(0x6B10);
    if (flags & 8) {
        func_0AF8B0(7);
        func_0AF8B0(0);
        func_018E18(4, 0);
    } else if (flags & 0x1000) {
        func_0AF8B0(7);
        func_0AF8B0(0);
        if (!func_0B63E8()) {
            func_018E18(4, 0);
        }
    } else {
        func_0B2F38(D_002F5180, flags);
    }
}
