/* LEVEL_03:0x0EEC28 -- placement copy of LEVEL_01_0F0390.c: resolves three handles, derives a flag and stores the results. */
struct Ob { char p0[0x1C]; int f1C; int f20; int f24; int f28; void *f2C; };
struct Src { int f00; int f04; int f08; int f0C; };
extern char D_0022F790[];
extern void func_09F8A0(void *a, void *b);
extern int func_0E5F70(int a);
extern int func_0FB398(int a);
extern int func_0F9A78(int a);
extern int func_0FD0E8(int a);
extern void func_0EEAA8(void *a, int b);

void func_0EEC28(struct Ob *a0, void *a1, struct Src *a2)
{
    int v;

    func_09F8A0(a0, D_0022F790);
    a0->f1C = func_0E5F70(a2->f00);
    a0->f20 = func_0FB398(a2->f04);
    a0->f24 = func_0F9A78(a2->f08);
    if (a2->f0C != 0) {
        v = func_0FD0E8(a2->f0C);
    } else {
        v = -1;
    }
    a0->f28 = v;
    func_0EEAA8(a1, ~v != 0);
    a0->f2C = a1;
}
