/* LEVEL_10:0x0CAFA8 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0BDE58(void);
void func_029E88(void);

extern unsigned int D_00209CE0;
extern unsigned int D_00209CE4;
extern unsigned char D_00209CED;
extern int D_00209CE8;

void func_0CAFA8(void)
{
    int r;

    D_00209CE0 = 0;
    D_00209CE4 = 0;
    if (D_00209CED != 0) {
        func_029E88();
        D_00209CED = 0;
    }
    if (D_00209CE8 != 1) {
        D_00209CE8 = 0;
    } else {
        r = func_0BDE58();
        if (r == 0x22) {
            D_00209CE8 = 2;
        } else {
            D_00209CE8 = 0;
        }
    }
}
