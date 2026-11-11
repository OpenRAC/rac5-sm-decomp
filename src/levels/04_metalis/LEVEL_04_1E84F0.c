/* LEVEL_04:0x1E84F0 -- placement copy of LEVEL_01_1D1508.c: walks a 0x68-byte record array with a helper, clears one flag byte, and runs a final helper. */

struct Rec {
    char b00;
    char pad01[0x67];
};

extern int func_1E8210(void);
extern void func_06FFE0(struct Rec *a0);
extern void func_1E8560(void);
extern struct Rec D_003B3F38[];

void func_1E84F0(void)
{
    unsigned int i;

    if (func_1E8210() != 0) {
        for (i = 0; i < 3; i++) {
            func_06FFE0(&D_003B3F38[i]);
        }
        D_003B3F38[3].b00 = 0;
    }
    func_1E8560();
}
