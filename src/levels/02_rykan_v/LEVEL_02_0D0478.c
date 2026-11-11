/* LEVEL_02:0x0D0478 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0C3418(void);
void func_02A878(void);

extern unsigned int D_00215CA0;
extern unsigned int D_00215CA4;
extern unsigned char D_00215CAD;
extern int D_00215CA8;

void func_0D0478(void)
{
    int r;

    D_00215CA0 = 0;
    D_00215CA4 = 0;
    if (D_00215CAD != 0) {
        func_02A878();
        D_00215CAD = 0;
    }
    if (D_00215CA8 != 1) {
        D_00215CA8 = 0;
    } else {
        r = func_0C3418();
        if (r == 0x22) {
            D_00215CA8 = 2;
        } else {
            D_00215CA8 = 0;
        }
    }
}
