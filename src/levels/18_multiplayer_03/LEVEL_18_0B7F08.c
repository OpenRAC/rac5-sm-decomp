/* LEVEL_18:0x0B7F08 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0AAF68(void);
void func_0270B8(void);

extern unsigned int D_001B01E0;
extern unsigned int D_001B01E4;
extern unsigned char D_001B01ED;
extern int D_001B01E8;

void func_0B7F08(void)
{
    int r;

    D_001B01E0 = 0;
    D_001B01E4 = 0;
    if (D_001B01ED != 0) {
        func_0270B8();
        D_001B01ED = 0;
    }
    if (D_001B01E8 != 1) {
        D_001B01E8 = 0;
    } else {
        r = func_0AAF68();
        if (r == 0x22) {
            D_001B01E8 = 2;
        } else {
            D_001B01E8 = 0;
        }
    }
}
