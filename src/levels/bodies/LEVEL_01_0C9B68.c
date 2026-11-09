/* LEVEL_01:0x0C9B68 -- clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0BCB08(void);
void func_02A0B0(void);

extern unsigned int D_00200CE0;
extern unsigned int D_00200CE4;
extern unsigned char D_00200CED;
extern int D_00200CE8;

void func_0C9B68(void)
{
    int r;

    D_00200CE0 = 0;
    D_00200CE4 = 0;
    if (D_00200CED != 0) {
        func_02A0B0();
        D_00200CED = 0;
    }
    if (D_00200CE8 != 1) {
        D_00200CE8 = 0;
    } else {
        r = func_0BCB08();
        if (r == 0x22) {
            D_00200CE8 = 2;
        } else {
            D_00200CE8 = 0;
        }
    }
}
