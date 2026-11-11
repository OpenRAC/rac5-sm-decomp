/* LEVEL_07:0x0CBBC8 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0BEB68(void);
void func_02A3F0(void);

extern unsigned int D_00214FE0;
extern unsigned int D_00214FE4;
extern unsigned char D_00214FED;
extern int D_00214FE8;

void func_0CBBC8(void)
{
    int r;

    D_00214FE0 = 0;
    D_00214FE4 = 0;
    if (D_00214FED != 0) {
        func_02A3F0();
        D_00214FED = 0;
    }
    if (D_00214FE8 != 1) {
        D_00214FE8 = 0;
    } else {
        r = func_0BEB68();
        if (r == 0x22) {
            D_00214FE8 = 2;
        } else {
            D_00214FE8 = 0;
        }
    }
}
