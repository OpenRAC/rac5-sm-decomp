/* FRONTEND:0x017318 -- placement copy of LEVEL_24_0C0BE0.c: placement copy of LEVEL_01_0C7318.c: prepares the object, clears its field at +0x18, forwards three cached words to the first helper and starts the 0xA handler. */
extern int D_00030498;
extern int D_0003049C;
extern int D_000304A0;

struct Obj;
typedef struct Obj2 {
    char pad00[0x18];
    int f18;
} Obj2;

extern void func_022938(struct Obj *p);
extern void func_0140E0(int a, int b, int c, int d);
extern void func_014118(int value);

void func_017318(Obj2 *o)
{
    int *p = &o->f18;

    func_022938((struct Obj *)o);
    *p = 0;
    func_0140E0(3, D_00030498, D_0003049C, D_000304A0);
    func_014118(0xA);
}
