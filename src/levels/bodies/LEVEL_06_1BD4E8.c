/* LEVEL_06:0x1BD4E8 -- placement copy of LEVEL_01_1D1508.c: walks a 0x68-byte record array with a helper, clears one flag byte, and runs a final helper. */

struct Rec {
    char b00;
    char pad01[0x67];
};

extern int func_1BD208(void);
extern void func_06B1C0(struct Rec *a0);
extern void func_1BD558(void);
extern struct Rec D_00385330[];

void func_1BD4E8(void)
{
    unsigned int i;

    if (func_1BD208() != 0) {
        for (i = 0; i < 3; i++) {
            func_06B1C0(&D_00385330[i]);
        }
        D_00385330[3].b00 = 0;
    }
    func_1BD558();
}
