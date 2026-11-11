/* LEVEL_05:0x0EC4D0 -- placement copy of LEVEL_01_0F0390.c: resolves three handles, derives a flag and stores the results. */
struct Ob { char p0[0x1C]; int f1C; int f20; int f24; int f28; void *f2C; };
struct Src { int f00; int f04; int f08; int f0C; };
extern char D_00205790[];
extern void func_09E0D0(void *a, void *b);
extern int func_0E3BF8(int a);
extern int func_0F8C40(int a);
extern int func_0F7320(int a);
extern int func_0FA990(int a);
extern void func_0EC350(void *a, int b);

void func_0EC4D0(struct Ob *a0, void *a1, struct Src *a2)
{
    int v;

    func_09E0D0(a0, D_00205790);
    a0->f1C = func_0E3BF8(a2->f00);
    a0->f20 = func_0F8C40(a2->f04);
    a0->f24 = func_0F7320(a2->f08);
    if (a2->f0C != 0) {
        v = func_0FA990(a2->f0C);
    } else {
        v = -1;
    }
    a0->f28 = v;
    func_0EC350(a1, ~v != 0);
    a0->f2C = a1;
}
