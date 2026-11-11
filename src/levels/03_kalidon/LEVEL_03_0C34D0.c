/* LEVEL_03:0x0C34D0 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_087E78(int value);
extern int func_0B5E08(int index);
extern void func_01A590(int a, int b);
extern int func_0BC908(void);

void func_0C34D0(void)
{
    unsigned int v;

    v = func_087E78(0x6B10);
    if (v & 8) {
        func_0B5E08(7);
        func_0B5E08(0);
        func_01A590(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0B5E08(0);
        func_0B5E08(7);
        if (func_0BC908() == 0) {
            func_01A590(4, 0);
        }
    }
}
