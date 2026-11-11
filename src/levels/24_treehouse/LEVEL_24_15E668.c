/* LEVEL_24:0x15E668 -- placement copy of LEVEL_03_1785A8.c: passes a table value with one record's floats to a helper when the table entry is nonzero. */
struct E1785A8 {
    int f00;
    float f04;
    float f08;
    float f0C;
    float f10;
};

extern int D_0035FF18[];
extern struct E1785A8 D_001F03A0[];
extern void func_07B0B0(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3, float x0, float x1, float x2, float x3);

void func_15E668(int a0, int a1, int idx)
{
    struct E1785A8 *e;
    float x0;
    float x1;
    float x2;
    float x3;
    int t;

    e = &D_001F03A0[idx];
    x0 = e->f04;
    x1 = e->f08;
    x2 = e->f0C;
    x3 = e->f10;
    t = D_0035FF18[idx];
    if (t != 0) {
        func_07B0B0(a1, t, a0, 0, 0, 0, 0, 1, x0, x1, x2, x3);
    }
}
