/* LEVEL_02:0x15B168 -- placement copy of LEVEL_01_1548F0.c: fills five words of a table with results from a helper over a strided record array. */

struct Rec {
    char pad00[0x10];
    int f10;
    char pad14[0x2C - 0x14];
};

extern struct Rec D_00232670[];
extern int D_003A90B8[];
extern int func_130418(int a);

void func_15B168(void)
{
    int i;

    for (i = 0; i != 5; i++) {
        D_003A90B8[i] = func_130418(D_00232670[i].f10);
    }
}
