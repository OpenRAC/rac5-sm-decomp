/* LEVEL_17:0x0B54C8 -- placement copy of LEVEL_24_0C0BE0.c: placement copy of LEVEL_01_0C7318.c: prepares the object, clears its field at +0x18, forwards three cached words to the first helper and starts the 0xA handler. */
extern int D_001A2290;
extern int D_001A2294;
extern int D_001A2298;

struct Obj;
typedef struct Obj2 {
    char pad00[0x18];
    int f18;
} Obj2;

extern void func_1112C0(struct Obj *p);
extern void func_0C5B88(int a, int b, int c, int d);
extern void func_0C5BC0(int value);

void func_0B54C8(Obj2 *o)
{
    int *p = &o->f18;

    func_1112C0((struct Obj *)o);
    *p = 0;
    func_0C5B88(3, D_001A2290, D_001A2294, D_001A2298);
    func_0C5BC0(0xA);
}
