/* LEVEL_23:0x0E3278 -- placement copy of LEVEL_01_0F0390.c: resolves three handles, derives a flag and stores the results. */
struct Ob { char p0[0x1C]; int f1C; int f20; int f24; int f28; void *f2C; };
struct Src { int f00; int f04; int f08; int f0C; };
extern char D_001E9A10[];
extern void func_096860(void *a, void *b);
extern int func_0DA9A0(int a);
extern int func_0EF9E8(int a);
extern int func_0EE0C8(int a);
extern int func_0F1738(int a);
extern void func_0E30F8(void *a, int b);

void func_0E3278(struct Ob *a0, void *a1, struct Src *a2)
{
    int v;

    func_096860(a0, D_001E9A10);
    a0->f1C = func_0DA9A0(a2->f00);
    a0->f20 = func_0EF9E8(a2->f04);
    a0->f24 = func_0EE0C8(a2->f08);
    if (a2->f0C != 0) {
        v = func_0F1738(a2->f0C);
    } else {
        v = -1;
    }
    a0->f28 = v;
    func_0E30F8(a1, ~v != 0);
    a0->f2C = a1;
}
