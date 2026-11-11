/* LEVEL_08:0x210FF8 -- placement copy of LEVEL_01_1D1508.c: walks a 0x68-byte record array with a helper, clears one flag byte, and runs a final helper. */

struct Rec {
    char b00;
    char pad01[0x67];
};

extern int func_210D18(void);
extern void func_073C48(struct Rec *a0);
extern void func_211068(void);
extern struct Rec D_003EB4B0[];

void func_210FF8(void)
{
    unsigned int i;

    if (func_210D18() != 0) {
        for (i = 0; i < 3; i++) {
            func_073C48(&D_003EB4B0[i]);
        }
        D_003EB4B0[3].b00 = 0;
    }
    func_211068();
}
