/* LEVEL_10:0x1D58B0 -- placement copy of LEVEL_01_1D1508.c: walks a 0x68-byte record array with a helper, clears one flag byte, and runs a final helper. */

struct Rec {
    char b00;
    char pad01[0x67];
};

extern int func_1D55D0(void);
extern void func_06D618(struct Rec *a0);
extern void func_1D5920(void);
extern struct Rec D_003A2028[];

void func_1D58B0(void)
{
    unsigned int i;

    if (func_1D55D0() != 0) {
        for (i = 0; i < 3; i++) {
            func_06D618(&D_003A2028[i]);
        }
        D_003A2028[3].b00 = 0;
    }
    func_1D5920();
}
