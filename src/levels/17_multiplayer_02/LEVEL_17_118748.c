/* LEVEL_17:0x118748 -- placement copy of LEVEL_16_118DD0.c: stores a record passed by value into a slot of a global table. */

struct Rec118DD0 {
    int w[48];
};

extern struct Rec118DD0 D_002D2410[];

void func_118748(int idx, struct Rec118DD0 src)
{
    D_002D2410[idx] = src;
}
