/* LEVEL_24:0x14AE40 -- placement copy of LEVEL_01_1548F0.c: fills five words of a table with results from a helper over a strided record array. */

struct Rec {
    char pad00[0x10];
    int f10;
    char pad14[0x2C - 0x14];
};

extern struct Rec D_001EE268[];
extern int D_0035DA28[];
extern int func_11FB68(int a);

void func_14AE40(void)
{
    int i;

    for (i = 0; i != 5; i++) {
        D_0035DA28[i] = func_11FB68(D_001EE268[i].f10);
    }
}
