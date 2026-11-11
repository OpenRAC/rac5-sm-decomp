/* LEVEL_04:0x0F78C8 -- placement copy of LEVEL_01_0F0390.c: resolves three handles, derives a flag and stores the results. */
struct Ob { char p0[0x1C]; int f1C; int f20; int f24; int f28; void *f2C; };
struct Src { int f00; int f04; int f08; int f0C; };
extern char D_00230210[];
extern void func_0A4D30(void *a, void *b);
extern int func_0EBA48(int a);
extern int func_104038(int a);
extern int func_102718(int a);
extern int func_105D88(int a);
extern void func_0F7748(void *a, int b);

void func_0F78C8(struct Ob *a0, void *a1, struct Src *a2)
{
    int v;

    func_0A4D30(a0, D_00230210);
    a0->f1C = func_0EBA48(a2->f00);
    a0->f20 = func_104038(a2->f04);
    a0->f24 = func_102718(a2->f08);
    if (a2->f0C != 0) {
        v = func_105D88(a2->f0C);
    } else {
        v = -1;
    }
    a0->f28 = v;
    func_0F7748(a1, ~v != 0);
    a0->f2C = a1;
}
