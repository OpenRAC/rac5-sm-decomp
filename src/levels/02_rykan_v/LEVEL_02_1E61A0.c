/* LEVEL_02:0x1E61A0 -- placement copy of LEVEL_01_1D1508.c: walks a 0x68-byte record array with a helper, clears one flag byte, and runs a final helper. */

struct Rec {
    char b00;
    char pad01[0x67];
};

extern int func_1E5EC0(void);
extern void func_073880(struct Rec *a0);
extern void func_1E6210(void);
extern struct Rec D_003B0878[];

void func_1E61A0(void)
{
    unsigned int i;

    if (func_1E5EC0() != 0) {
        for (i = 0; i < 3; i++) {
            func_073880(&D_003B0878[i]);
        }
        D_003B0878[3].b00 = 0;
    }
    func_1E6210();
}
