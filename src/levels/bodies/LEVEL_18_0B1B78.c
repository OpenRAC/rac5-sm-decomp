/* LEVEL_18:0x0B1B78 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_078F38(int value);
extern void func_0A40A8(int a);
extern void func_0181E0(int a, int b);
extern int func_0AAF80(void);

void func_0B1B78(void)
{
    unsigned int v;

    v = func_078F38(0x6B10);
    if (v & 8) {
        func_0A40A8(7);
        func_0A40A8(0);
        func_0181E0(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0A40A8(0);
        func_0A40A8(7);
        if (func_0AAF80() == 0) {
            func_0181E0(4, 0);
        }
    }
}
