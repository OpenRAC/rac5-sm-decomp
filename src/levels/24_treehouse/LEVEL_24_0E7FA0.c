/* LEVEL_24:0x0E7FA0 -- placement copy of LEVEL_01_0F0390.c: resolves three handles, derives a flag and stores the results. */
struct Ob { char p0[0x1C]; int f1C; int f20; int f24; int f28; void *f2C; };
struct Src { int f00; int f04; int f08; int f0C; };
extern char D_001E7610[];
extern void func_099398(void *a, void *b);
extern int func_0DD4D8(int a);
extern int func_0F4710(int a);
extern int func_0F2DF0(int a);
extern int func_0F6460(int a);
extern void func_0E7E20(void *a, int b);

void func_0E7FA0(struct Ob *a0, void *a1, struct Src *a2)
{
    int v;

    func_099398(a0, D_001E7610);
    a0->f1C = func_0DD4D8(a2->f00);
    a0->f20 = func_0F4710(a2->f04);
    a0->f24 = func_0F2DF0(a2->f08);
    if (a2->f0C != 0) {
        v = func_0F6460(a2->f0C);
    } else {
        v = -1;
    }
    a0->f28 = v;
    func_0E7E20(a1, ~v != 0);
    a0->f2C = a1;
}
