/* LEVEL_20:0x0A04B8 -- placement copy of LEVEL_24_0C0BE0.c: placement copy of LEVEL_01_0C7318.c: prepares the object, clears its field at +0x18, forwards three cached words to the first helper and starts the 0xA handler. */
extern int D_00111370;
extern int D_00111374;
extern int D_00111378;

struct Obj;
typedef struct Obj2 {
    char pad00[0x18];
    int f18;
} Obj2;

extern void func_0E4B30(struct Obj *p);
extern void func_0B0B78(int a, int b, int c, int d);
extern void func_0B0BB0(int value);

void func_0A04B8(Obj2 *o)
{
    int *p = &o->f18;

    func_0E4B30((struct Obj *)o);
    *p = 0;
    func_0B0B78(3, D_00111370, D_00111374, D_00111378);
    func_0B0BB0(0xA);
}
