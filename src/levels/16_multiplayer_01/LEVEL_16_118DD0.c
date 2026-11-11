/* LEVEL_16:0x118DD0 -- stores a record passed by value into a slot of a global table. */

struct Rec118DD0 {
    int w[48];
};

extern struct Rec118DD0 D_002E1110[];

void func_118DD0(int idx, struct Rec118DD0 src)
{
    D_002E1110[idx] = src;
}
