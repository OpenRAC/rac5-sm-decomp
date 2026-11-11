/* LEVEL_09:0x14D8D0 -- placement copy of LEVEL_01_1548F0.c: fills five words of a table with results from a helper over a strided record array. */

struct Rec {
    char pad00[0x10];
    int f10;
    char pad14[0x2C - 0x14];
};

extern struct Rec D_00206F30[];
extern int D_00379318[];
extern int func_123000(int a);

void func_14D8D0(void)
{
    int i;

    for (i = 0; i != 5; i++) {
        D_00379318[i] = func_123000(D_00206F30[i].f10);
    }
}
