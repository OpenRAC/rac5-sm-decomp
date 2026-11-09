/* LEVEL_08:0x0CE610 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_090070(long long value);
extern void func_0C0F10(int a);
extern void func_01B1A0(int a, int b);
extern int func_0C7A48(void);

void func_0CE610(void)
{
    unsigned int v;

    v = func_090070(0x6B10);
    if (v & 8) {
        func_0C0F10(7);
        func_0C0F10(0);
        func_01B1A0(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0C0F10(0);
        func_0C0F10(7);
        if (func_0C7A48() == 0) {
            func_01B1A0(4, 0);
        }
    }
}
