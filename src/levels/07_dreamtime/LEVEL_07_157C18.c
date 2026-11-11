/* LEVEL_07:0x157C18 -- placement copy of LEVEL_01_1548F0.c: fills five words of a table with results from a helper over a strided record array. */

struct Rec {
    char pad00[0x10];
    int f10;
    char pad14[0x2C - 0x14];
};

extern struct Rec D_00232240[];
extern int D_003A74A8[];
extern int func_12D068(int a);

void func_157C18(void)
{
    int i;

    for (i = 0; i != 5; i++) {
        D_003A74A8[i] = func_12D068(D_00232240[i].f10);
    }
}
