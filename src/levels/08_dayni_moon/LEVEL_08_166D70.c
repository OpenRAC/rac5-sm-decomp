/* LEVEL_08:0x166D70 -- placement copy of LEVEL_01_1548F0.c: fills five words of a table with results from a helper over a strided record array. */

struct Rec {
    char pad00[0x10];
    int f10;
    char pad14[0x2C - 0x14];
};

extern struct Rec D_00267490[];
extern int D_003E0EA8[];
extern int func_13B5A0(int a);

void func_166D70(void)
{
    int i;

    for (i = 0; i != 5; i++) {
        D_003E0EA8[i] = func_13B5A0(D_00267490[i].f10);
    }
}
