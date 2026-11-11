/* LEVEL_01:0x1D1508 -- walks a 0x68-byte record array with a helper, clears one flag byte, and runs a final helper. */

struct Rec {
    char b00;
    char pad01[0x67];
};

extern int func_1D1228(void);
extern void func_06E400(struct Rec *a0);
extern void func_1D1578(void);
extern struct Rec D_00398920[];

void func_1D1508(void)
{
    unsigned int i;

    if (func_1D1228() != 0) {
        for (i = 0; i < 3; i++) {
            func_06E400(&D_00398920[i]);
        }
        D_00398920[3].b00 = 0;
    }
    func_1D1578();
}
