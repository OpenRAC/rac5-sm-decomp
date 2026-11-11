/* LEVEL_15:0x126998 -- calls a helper with a zero in the third slot, then stores three arguments into a record. */
struct P126998 {
    char pad0[0x14];
    int f14;
    int f18;
    int f1C;
};

extern void func_07B3F8(struct P126998 *p, int a1, int a2);

void func_126998(struct P126998 *p, int a1, int a2, int a3, int a4)
{
    func_07B3F8(p, a1, 0);
    p->f14 = a2;
    p->f18 = a3;
    p->f1C = a4;
}
