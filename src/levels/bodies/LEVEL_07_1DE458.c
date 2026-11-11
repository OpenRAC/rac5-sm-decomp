/* LEVEL_07:0x1DE458 -- placement copy of LEVEL_01_1D1508.c: walks a 0x68-byte record array with a helper, clears one flag byte, and runs a final helper. */

struct Rec {
    char b00;
    char pad01[0x67];
};

extern int func_1DE178(void);
extern void func_06F280(struct Rec *a0);
extern void func_1DE4C8(void);
extern struct Rec D_003AE310[];

void func_1DE458(void)
{
    unsigned int i;

    if (func_1DE178() != 0) {
        for (i = 0; i < 3; i++) {
            func_06F280(&D_003AE310[i]);
        }
        D_003AE310[3].b00 = 0;
    }
    func_1DE4C8();
}
