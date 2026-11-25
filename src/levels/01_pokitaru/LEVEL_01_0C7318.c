/* LEVEL_01:0x0C7318 -- placement copy of LEVEL_24_0C0BE0.c: placement copy of LEVEL_01_0C7318.c: prepares the object, clears its field at +0x18, forwards three cached words to the first helper and starts the 0xA handler. */
extern int D_00200C18;
extern int D_00200C1C;
extern int D_00200C20;

struct Obj;
typedef struct Obj2 {
    char pad00[0x18];
    int f18;
} Obj2;

extern void func_135678(struct Obj *p);
extern void func_0D6F50(int a, int b, int c, int d);
extern void func_0D6F88(int value);

void func_0C7318(Obj2 *o)
{
    int *p = &o->f18;

    func_135678((struct Obj *)o);
    *p = 0;
    func_0D6F50(3, D_00200C18, D_00200C1C, D_00200C20);
    func_0D6F88(0xA);
}
