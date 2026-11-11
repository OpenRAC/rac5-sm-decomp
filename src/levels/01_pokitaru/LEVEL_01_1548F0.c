/* LEVEL_01:0x1548F0 -- fills five words of a table with results from a helper over a strided record array. */

struct Rec {
    char pad00[0x10];
    int f10;
    char pad14[0x2C - 0x14];
};

extern struct Rec D_0021D3A0[];
extern int D_00391B98[];
extern int func_12A068(int a);

void func_1548F0(void)
{
    int i;

    for (i = 0; i != 5; i++) {
        D_00391B98[i] = func_12A068(D_0021D3A0[i].f10);
    }
}
