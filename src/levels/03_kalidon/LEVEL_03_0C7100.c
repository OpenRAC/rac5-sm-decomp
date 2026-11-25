/* LEVEL_03:0x0C7100 -- placement copy of LEVEL_24_0C0BE0.c: placement copy of LEVEL_01_0C7318.c: prepares the object, clears its field at +0x18, forwards three cached words to the first helper and starts the 0xA handler. */
extern int D_00219298;
extern int D_0021929C;
extern int D_002192A0;

struct Obj;
typedef struct Obj2 {
    char pad00[0x18];
    int f18;
} Obj2;

extern void func_133A40(struct Obj *p);
extern void func_0D6D38(int a, int b, int c, int d);
extern void func_0D6D70(int value);

void func_0C7100(Obj2 *o)
{
    int *p = &o->f18;

    func_133A40((struct Obj *)o);
    *p = 0;
    func_0D6D38(3, D_00219298, D_0021929C, D_002192A0);
    func_0D6D70(0xA);
}
