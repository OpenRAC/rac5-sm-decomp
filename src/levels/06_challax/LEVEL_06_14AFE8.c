/* LEVEL_06:0x14AFE8 -- placement copy of LEVEL_01_1548F0.c: fills five words of a table with results from a helper over a strided record array. */

struct Rec {
    char pad00[0x10];
    int f10;
    char pad14[0x2C - 0x14];
};

extern struct Rec D_0020C190[];
extern int D_0037E918[];
extern int func_1206C0(int a);

void func_14AFE8(void)
{
    int i;

    for (i = 0; i != 5; i++) {
        D_0037E918[i] = func_1206C0(D_0020C190[i].f10);
    }
}
