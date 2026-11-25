/* LEVEL_19:0x0B5860 -- placement copy of LEVEL_24_0C0BE0.c: placement copy of LEVEL_01_0C7318.c: prepares the object, clears its field at +0x18, forwards three cached words to the first helper and starts the 0xA handler. */
extern int D_001AFE10;
extern int D_001AFE14;
extern int D_001AFE18;

struct Obj;
typedef struct Obj2 {
    char pad00[0x18];
    int f18;
} Obj2;

extern void func_1123E8(struct Obj *p);
extern void func_0C5F20(int a, int b, int c, int d);
extern void func_0C5F58(int value);

void func_0B5860(Obj2 *o)
{
    int *p = &o->f18;

    func_1123E8((struct Obj *)o);
    *p = 0;
    func_0C5F20(3, D_001AFE10, D_001AFE14, D_001AFE18);
    func_0C5F58(0xA);
}
