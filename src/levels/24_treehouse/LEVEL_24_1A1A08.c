/* LEVEL_24:0x1A1A08 -- placement copy of LEVEL_01_1D1508.c: walks a 0x68-byte record array with a helper, clears one flag byte, and runs a final helper. */

struct Rec {
    char b00;
    char pad01[0x67];
};

extern int func_1A1728(void);
extern void func_067A40(struct Rec *a0);
extern void func_1A1A78(void);
extern struct Rec D_00362670[];

void func_1A1A08(void)
{
    unsigned int i;

    if (func_1A1728() != 0) {
        for (i = 0; i < 3; i++) {
            func_067A40(&D_00362670[i]);
        }
        D_00362670[3].b00 = 0;
    }
    func_1A1A78();
}
