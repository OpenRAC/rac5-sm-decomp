/* LEVEL_10:0x0EFCD0 -- placement copy of LEVEL_01_0F0390.c: resolves three handles, derives a flag and stores the results. */
struct Ob { char p0[0x1C]; int f1C; int f20; int f24; int f28; void *f2C; };
struct Src { int f00; int f04; int f08; int f0C; };
extern char D_0021F810[];
extern void func_0A0BF8(void *a, void *b);
extern int func_0E75C8(int a);
extern int func_0FC440(int a);
extern int func_0FAB20(int a);
extern int func_0FE190(int a);
extern void func_0EFB50(void *a, int b);

void func_0EFCD0(struct Ob *a0, void *a1, struct Src *a2)
{
    int v;

    func_0A0BF8(a0, D_0021F810);
    a0->f1C = func_0E75C8(a2->f00);
    a0->f20 = func_0FC440(a2->f04);
    a0->f24 = func_0FAB20(a2->f08);
    if (a2->f0C != 0) {
        v = func_0FE190(a2->f0C);
    } else {
        v = -1;
    }
    a0->f28 = v;
    func_0EFB50(a1, ~v != 0);
    a0->f2C = a1;
}
