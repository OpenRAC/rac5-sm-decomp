/* LEVEL_22:0x13CAF8 -- placement copy of LEVEL_01_1D1508.c: walks a 0x68-byte record array with a helper, clears one flag byte, and runs a final helper. */

struct Rec {
    char b00;
    char pad01[0x67];
};

extern int func_13C818(void);
extern void func_063718(struct Rec *a0);
extern void func_13CB68(void);
extern struct Rec D_002E8338[];

void func_13CAF8(void)
{
    unsigned int i;

    if (func_13C818() != 0) {
        for (i = 0; i < 3; i++) {
            func_063718(&D_002E8338[i]);
        }
        D_002E8338[3].b00 = 0;
    }
    func_13CB68();
}
