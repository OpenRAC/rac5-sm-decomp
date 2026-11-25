/* LEVEL_02:0x0CDC28 -- placement copy of LEVEL_24_0C0BE0.c: placement copy of LEVEL_01_0C7318.c: prepares the object, clears its field at +0x18, forwards three cached words to the first helper and starts the 0xA handler. */
extern int D_00215BD8;
extern int D_00215BDC;
extern int D_00215BE0;

struct Obj;
typedef struct Obj2 {
    char pad00[0x18];
    int f18;
} Obj2;

extern void func_13BA28(struct Obj *p);
extern void func_0DD8E0(int a, int b, int c, int d);
extern void func_0DD918(int value);

void func_0CDC28(Obj2 *o)
{
    int *p = &o->f18;

    func_13BA28((struct Obj *)o);
    *p = 0;
    func_0DD8E0(3, D_00215BD8, D_00215BDC, D_00215BE0);
    func_0DD918(0xA);
}
