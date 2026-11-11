/* LEVEL_18:0x117DC0 -- placement copy of LEVEL_16_118DD0.c: stores a record passed by value into a slot of a global table. */

struct Rec118DD0 {
    int w[48];
};

extern struct Rec118DD0 D_002E1490[];

void func_117DC0(int idx, struct Rec118DD0 src)
{
    D_002E1490[idx] = src;
}
