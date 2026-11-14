/* LEVEL_10:0x0C5348 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_003326C0[];
extern int func_0BB750(int *v);
extern unsigned int func_088388(int value);
extern int func_0B71F8(int index);
extern int func_0BDE70(void);
extern void func_019EA8(int a, int b);
extern int func_0BA9F0(int *o, int arg);

void func_0C5348(void)
{
    unsigned int flags;

    func_0BB750(D_003326C0);
    flags = func_088388(0x6B10);
    if (flags & 8) {
        func_0B71F8(7);
        func_0B71F8(0);
        func_019EA8(4, 0);
    } else if (flags & 0x1000) {
        func_0B71F8(7);
        func_0B71F8(0);
        if (!func_0BDE70()) {
            func_019EA8(4, 0);
        }
    } else {
        func_0BA9F0(D_003326C0, flags);
    }
}
