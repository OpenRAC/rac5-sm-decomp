/* LEVEL_04:0x161040 -- placement copy of LEVEL_01_1548F0.c: fills five words of a table with results from a helper over a strided record array. */

struct Rec {
    char pad00[0x10];
    int f10;
    char pad14[0x2C - 0x14];
};

extern struct Rec D_00236E70[];
extern int D_003AC358[];
extern int func_1364E8(int a);

void func_161040(void)
{
    int i;

    for (i = 0; i != 5; i++) {
        D_003AC358[i] = func_1364E8(D_00236E70[i].f10);
    }
}
