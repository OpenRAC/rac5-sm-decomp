/* LEVEL_05:0x0C8110 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0BB0B0(void);
void func_028D28(void);

extern unsigned int D_001F0060;
extern unsigned int D_001F0064;
extern unsigned char D_001F006D;
extern int D_001F0068;

void func_0C8110(void)
{
    int r;

    D_001F0060 = 0;
    D_001F0064 = 0;
    if (D_001F006D != 0) {
        func_028D28();
        D_001F006D = 0;
    }
    if (D_001F0068 != 1) {
        D_001F0068 = 0;
    } else {
        r = func_0BB0B0();
        if (r == 0x22) {
            D_001F0068 = 2;
        } else {
            D_001F0068 = 0;
        }
    }
}
