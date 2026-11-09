/* LEVEL_04:0x0CF380 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0C2320(void);
void func_029B58(void);

extern unsigned int D_0021A1A0;
extern unsigned int D_0021A1A4;
extern unsigned char D_0021A1AD;
extern int D_0021A1A8;

void func_0CF380(void)
{
    int r;

    D_0021A1A0 = 0;
    D_0021A1A4 = 0;
    if (D_0021A1AD != 0) {
        func_029B58();
        D_0021A1AD = 0;
    }
    if (D_0021A1A8 != 1) {
        D_0021A1A8 = 0;
    } else {
        r = func_0C2320();
        if (r == 0x22) {
            D_0021A1A8 = 2;
        } else {
            D_0021A1A8 = 0;
        }
    }
}
