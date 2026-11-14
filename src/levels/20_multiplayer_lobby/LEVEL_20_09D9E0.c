/* LEVEL_20:0x09D9E0 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_0019AA40[];
extern int func_093988(int *v);
extern unsigned int func_067228(int value);
extern int func_08F6B0(int index);
extern int func_0964D8(void);
extern void func_016950(int a, int b);
extern int func_092C28(int *o, int arg);

void func_09D9E0(void)
{
    unsigned int flags;

    func_093988(D_0019AA40);
    flags = func_067228(0x6B10);
    if (flags & 8) {
        func_08F6B0(7);
        func_08F6B0(0);
        func_016950(4, 0);
    } else if (flags & 0x1000) {
        func_08F6B0(7);
        func_08F6B0(0);
        if (!func_0964D8()) {
            func_016950(4, 0);
        }
    } else {
        func_092C28(D_0019AA40, flags);
    }
}
