/* LEVEL_22:0x0B8018 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0AAFB8(void);
void func_024648(void);

extern unsigned int D_00160060;
extern unsigned int D_00160064;
extern unsigned char D_0016006D;
extern int D_00160068;

void func_0B8018(void)
{
    int r;

    D_00160060 = 0;
    D_00160064 = 0;
    if (D_0016006D != 0) {
        func_024648();
        D_0016006D = 0;
    }
    if (D_00160068 != 1) {
        D_00160068 = 0;
    } else {
        r = func_0AAFB8();
        if (r == 0x22) {
            D_00160068 = 2;
        } else {
            D_00160068 = 0;
        }
    }
}
