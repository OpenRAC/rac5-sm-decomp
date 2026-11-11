/* LEVEL_10:0x1533F8 -- placement copy of LEVEL_01_1548F0.c: fills five words of a table with results from a helper over a strided record array. */

struct Rec {
    char pad00[0x10];
    int f10;
    char pad14[0x2C - 0x14];
};

extern struct Rec D_00226528[];
extern int D_0039AF98[];
extern int func_127EC8(int a);

void func_1533F8(void)
{
    int i;

    for (i = 0; i != 5; i++) {
        D_0039AF98[i] = func_127EC8(D_00226528[i].f10);
    }
}
