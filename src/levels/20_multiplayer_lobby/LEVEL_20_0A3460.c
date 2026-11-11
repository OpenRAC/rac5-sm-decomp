/* LEVEL_20:0x0A3460 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0964C0(void);
void func_024610(void);

extern unsigned int D_00111440;
extern unsigned int D_00111444;
extern unsigned char D_0011144D;
extern int D_00111448;

void func_0A3460(void)
{
    int r;

    D_00111440 = 0;
    D_00111444 = 0;
    if (D_0011144D != 0) {
        func_024610();
        D_0011144D = 0;
    }
    if (D_00111448 != 1) {
        D_00111448 = 0;
    } else {
        r = func_0964C0();
        if (r == 0x22) {
            D_00111448 = 2;
        } else {
            D_00111448 = 0;
        }
    }
}
