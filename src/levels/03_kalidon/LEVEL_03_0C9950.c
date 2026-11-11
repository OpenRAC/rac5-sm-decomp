/* LEVEL_03:0x0C9950 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0BC8F0(void);
void func_029EA8(void);

extern unsigned int D_00219360;
extern unsigned int D_00219364;
extern unsigned char D_0021936D;
extern int D_00219368;

void func_0C9950(void)
{
    int r;

    D_00219360 = 0;
    D_00219364 = 0;
    if (D_0021936D != 0) {
        func_029EA8();
        D_0021936D = 0;
    }
    if (D_00219368 != 1) {
        D_00219368 = 0;
    } else {
        r = func_0BC8F0();
        if (r == 0x22) {
            D_00219368 = 2;
        } else {
            D_00219368 = 0;
        }
    }
}
