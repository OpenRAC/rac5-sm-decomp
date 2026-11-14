/* LEVEL_08:0x0CEF20 -- placement copy of LEVEL_01_0C3FF8.c: prepares the shared record, then reacts to two input flag bits by queuing helper calls, passing the flags on to the fallback helper when neither is set. */
extern int D_00378540[];
extern int func_0C52F8(int *v);
extern unsigned int func_090070(int value);
extern int func_0C0F10(int index);
extern int func_0C7A48(void);
extern void func_01B1A0(int a, int b);
extern int func_0C4598(int *o, int arg);

void func_0CEF20(void)
{
    unsigned int flags;

    func_0C52F8(D_00378540);
    flags = func_090070(0x6B10);
    if (flags & 8) {
        func_0C0F10(7);
        func_0C0F10(0);
        func_01B1A0(4, 0);
    } else if (flags & 0x1000) {
        func_0C0F10(7);
        func_0C0F10(0);
        if (!func_0C7A48()) {
            func_01B1A0(4, 0);
        }
    } else {
        func_0C4598(D_00378540, flags);
    }
}
