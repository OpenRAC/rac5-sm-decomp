/* LEVEL_05:0x1502E0 -- placement copy of LEVEL_01_1548F0.c: fills five words of a table with results from a helper over a strided record array. */

struct Rec {
    char pad00[0x10];
    int f10;
    char pad14[0x2C - 0x14];
};

extern struct Rec D_0020C1F0[];
extern int D_0037DA58[];
extern int func_1259E0(int a);

void func_1502E0(void)
{
    int i;

    for (i = 0; i != 5; i++) {
        D_0037DA58[i] = func_1259E0(D_0020C1F0[i].f10);
    }
}
