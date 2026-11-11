/* LEVEL_24:0x0C3430 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0B63D0(void);
void func_0275F0(void);

extern unsigned int D_001D1960;
extern unsigned int D_001D1964;
extern unsigned char D_001D196D;
extern int D_001D1968;

void func_0C3430(void)
{
    int r;

    D_001D1960 = 0;
    D_001D1964 = 0;
    if (D_001D196D != 0) {
        func_0275F0();
        D_001D196D = 0;
    }
    if (D_001D1968 != 1) {
        D_001D1968 = 0;
    } else {
        r = func_0B63D0();
        if (r == 0x22) {
            D_001D1968 = 2;
        } else {
            D_001D1968 = 0;
        }
    }
}
