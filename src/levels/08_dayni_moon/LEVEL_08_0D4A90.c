/* LEVEL_08:0x0D4A90 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0C7A30(void);
void func_02A628(void);

extern unsigned int D_00249BA0;
extern unsigned int D_00249BA4;
extern unsigned char D_00249BAD;
extern int D_00249BA8;

void func_0D4A90(void)
{
    int r;

    D_00249BA0 = 0;
    D_00249BA4 = 0;
    if (D_00249BAD != 0) {
        func_02A628();
        D_00249BAD = 0;
    }
    if (D_00249BA8 != 1) {
        D_00249BA8 = 0;
    } else {
        r = func_0C7A30();
        if (r == 0x22) {
            D_00249BA8 = 2;
        } else {
            D_00249BA8 = 0;
        }
    }
}
