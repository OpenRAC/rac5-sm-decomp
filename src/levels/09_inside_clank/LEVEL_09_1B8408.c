/* LEVEL_09:0x1B8408 -- placement copy of LEVEL_01_1D1508.c: walks a 0x68-byte record array with a helper, clears one flag byte, and runs a final helper. */

struct Rec {
    char b00;
    char pad01[0x67];
};

extern int func_1B8128(void);
extern void func_06B000(struct Rec *a0);
extern void func_1B8478(void);
extern struct Rec D_00380108[];

void func_1B8408(void)
{
    unsigned int i;

    if (func_1B8128() != 0) {
        for (i = 0; i < 3; i++) {
            func_06B000(&D_00380108[i]);
        }
        D_00380108[3].b00 = 0;
    }
    func_1B8478();
}
