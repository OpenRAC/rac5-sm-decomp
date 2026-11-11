/* LEVEL_19:0x0B2478 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_079AA0(int value);
extern int func_0A4928(int a);
extern void func_018898(int a, int b);
extern int func_0AB880(void);

void func_0B2478(void)
{
    unsigned int v;

    v = func_079AA0(0x6B10);
    if (v & 8) {
        func_0A4928(7);
        func_0A4928(0);
        func_018898(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0A4928(0);
        func_0A4928(7);
        if (func_0AB880() == 0) {
            func_018898(4, 0);
        }
    }
}
