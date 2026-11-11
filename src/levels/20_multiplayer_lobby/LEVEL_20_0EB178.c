/* LEVEL_20:0x0EB178 -- placement copy of LEVEL_16_118DD0.c: stores a record passed by value into a slot of a global table. */

struct Rec118DD0 {
    int w[48];
};

extern struct Rec118DD0 D_00204668[];

void func_0EB178(int idx, struct Rec118DD0 src)
{
    D_00204668[idx] = src;
}
