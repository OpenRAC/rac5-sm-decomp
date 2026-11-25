/* LEVEL_23:0x0BE0B8 -- placement copy of LEVEL_24_0C0BE0.c: placement copy of LEVEL_01_0C7318.c: prepares the object, clears its field at +0x18, forwards three cached words to the first helper and starts the 0xA handler. */
extern int D_001D4018;
extern int D_001D401C;
extern int D_001D4020;

struct Obj;
typedef struct Obj2 {
    char pad00[0x18];
    int f18;
} Obj2;

extern void func_126DF0(struct Obj *p);
extern void func_0CDD80(int a, int b, int c, int d);
extern void func_0CDDB8(int value);

void func_0BE0B8(Obj2 *o)
{
    int *p = &o->f18;

    func_126DF0((struct Obj *)o);
    *p = 0;
    func_0CDD80(3, D_001D4018, D_001D401C, D_001D4020);
    func_0CDDB8(0xA);
}
