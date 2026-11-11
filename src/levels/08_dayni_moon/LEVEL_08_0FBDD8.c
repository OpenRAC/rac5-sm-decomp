/* LEVEL_08:0x0FBDD8 -- placement copy of LEVEL_01_0F0390.c: resolves three handles, derives a flag and stores the results. */
struct Ob { char p0[0x1C]; int f1C; int f20; int f24; int f28; void *f2C; };
struct Src { int f00; int f04; int f08; int f0C; };
extern char D_00260510[];
extern void func_0AA418(void *a, void *b);
extern int func_0F1158(int a);
extern int func_108548(int a);
extern int func_106C28(int a);
extern int func_10A298(int a);
extern void func_0FBC58(void *a, int b);

void func_0FBDD8(struct Ob *a0, void *a1, struct Src *a2)
{
    int v;

    func_0AA418(a0, D_00260510);
    a0->f1C = func_0F1158(a2->f00);
    a0->f20 = func_108548(a2->f04);
    a0->f24 = func_106C28(a2->f08);
    if (a2->f0C != 0) {
        v = func_10A298(a2->f0C);
    } else {
        v = -1;
    }
    a0->f28 = v;
    func_0FBC58(a1, ~v != 0);
    a0->f2C = a1;
}
