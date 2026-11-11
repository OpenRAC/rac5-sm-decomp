/* LEVEL_03:0x153D80 -- placement copy of LEVEL_01_1548F0.c: fills five words of a table with results from a helper over a strided record array. */

struct Rec {
    char pad00[0x10];
    int f10;
    char pad14[0x2C - 0x14];
};

extern struct Rec D_00236740[];
extern int D_003ACA68[];
extern int func_1282D0(int a);

void func_153D80(void)
{
    int i;

    for (i = 0; i != 5; i++) {
        D_003ACA68[i] = func_1282D0(D_00236740[i].f10);
    }
}
