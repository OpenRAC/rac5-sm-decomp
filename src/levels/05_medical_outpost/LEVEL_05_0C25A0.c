/* LEVEL_05:0x0C25A0 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_00315180[];
extern int func_0B89B0(int *v);
extern unsigned int func_085978(int value);
extern int func_0B45C8(int index);
extern int func_0BB0C8(void);
extern void func_019DC0(int a, int b);
extern int func_0B7C50(int *o, int arg);

void func_0C25A0(void)
{
    unsigned int flags;

    func_0B89B0(D_00315180);
    flags = func_085978(0x6B10);
    if (flags & 8) {
        func_0B45C8(7);
        func_0B45C8(0);
        func_019DC0(4, 0);
    } else if (flags & 0x1000) {
        func_0B45C8(7);
        func_0B45C8(0);
        if (!func_0BB0C8()) {
            func_019DC0(4, 0);
        }
    } else {
        func_0B7C50(D_00315180, flags);
    }
}
