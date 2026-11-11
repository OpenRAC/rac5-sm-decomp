/* LEVEL_23:0x1A2EA0 -- placement copy of LEVEL_01_1D1508.c: walks a 0x68-byte record array with a helper, clears one flag byte, and runs a final helper. */

struct Rec {
    char b00;
    char pad01[0x67];
};

extern int func_1A2BC0(void);
extern void func_067BA8(struct Rec *a0);
extern void func_1A2F10(void);
extern struct Rec D_00366720[];

void func_1A2EA0(void)
{
    unsigned int i;

    if (func_1A2BC0() != 0) {
        for (i = 0; i < 3; i++) {
            func_067BA8(&D_00366720[i]);
        }
        D_00366720[3].b00 = 0;
    }
    func_1A2F10();
}
