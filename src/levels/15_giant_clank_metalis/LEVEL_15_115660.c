/* LEVEL_15:0x115660 -- placement copy of LEVEL_01_0F0390.c: resolves three handles, derives a flag and stores the results. */
struct Ob { char p0[0x1C]; int f1C; int f20; int f24; int f28; void *f2C; };
struct Src { int f00; int f04; int f08; int f0C; };
extern char D_00170838[];
extern void func_080488(void *a, void *b);
extern int func_12BFB0(int a);
extern int func_12E158(int a);
extern int func_11C0D0(int a);
extern int func_0CDAD8(int a);
extern void func_1141B8(void *a, int b);

void func_115660(struct Ob *a0, void *a1, struct Src *a2)
{
    int v;

    func_080488(a0, D_00170838);
    a0->f1C = func_12BFB0(a2->f00);
    a0->f20 = func_12E158(a2->f04);
    a0->f24 = func_11C0D0(a2->f08);
    if (a2->f0C != 0) {
        v = func_0CDAD8(a2->f0C);
    } else {
        v = -1;
    }
    a0->f28 = v;
    func_1141B8(a1, ~v != 0);
    a0->f2C = a1;
}
