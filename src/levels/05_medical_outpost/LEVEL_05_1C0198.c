/* LEVEL_05:0x1C0198 -- placement copy of LEVEL_01_1D1508.c: walks a 0x68-byte record array with a helper, clears one flag byte, and runs a final helper. */

struct Rec {
    char b00;
    char pad01[0x67];
};

extern int func_1BFEB8(void);
extern void func_06C068(struct Rec *a0);
extern void func_1C0208(void);
extern struct Rec D_0038FCA0[];

void func_1C0198(void)
{
    unsigned int i;

    if (func_1BFEB8() != 0) {
        for (i = 0; i < 3; i++) {
            func_06C068(&D_0038FCA0[i]);
        }
        D_0038FCA0[3].b00 = 0;
    }
    func_1C0208();
}
