/* LEVEL_18:0x0B4F60 -- placement copy of LEVEL_24_0C0BE0.c: placement copy of LEVEL_01_0C7318.c: prepares the object, clears its field at +0x18, forwards three cached words to the first helper and starts the 0xA handler. */
extern int D_001B0110;
extern int D_001B0114;
extern int D_001B0118;

struct Obj;
typedef struct Obj2 {
    char pad00[0x18];
    int f18;
} Obj2;

extern void func_1109F8(struct Obj *p);
extern void func_0C5620(int a, int b, int c, int d);
extern void func_0C5658(int value);

void func_0B4F60(Obj2 *o)
{
    int *p = &o->f18;

    func_1109F8((struct Obj *)o);
    *p = 0;
    func_0C5620(3, D_001B0110, D_001B0114, D_001B0118);
    func_0C5658(0xA);
}
