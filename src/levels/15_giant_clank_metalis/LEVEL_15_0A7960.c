/* LEVEL_15:0x0A7960 -- placement copy of LEVEL_24_0C0BE0.c: placement copy of LEVEL_01_0C7318.c: prepares the object, clears its field at +0x18, forwards three cached words to the first helper and starts the 0xA handler. */
extern int D_00155898;
extern int D_0015589C;
extern int D_001558A0;

struct Obj;
typedef struct Obj2 {
    char pad00[0x18];
    int f18;
} Obj2;

extern void func_0F4540(struct Obj *p);
extern void func_0B7590(int a, int b, int c, int d);
extern void func_0B75C8(int value);

void func_0A7960(Obj2 *o)
{
    int *p = &o->f18;

    func_0F4540((struct Obj *)o);
    *p = 0;
    func_0B7590(3, D_00155898, D_0015589C, D_001558A0);
    func_0B75C8(0xA);
}
