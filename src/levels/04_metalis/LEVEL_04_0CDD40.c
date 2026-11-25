/* LEVEL_04:0x0CDD40 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_0021A0C0;
extern int D_0021A0C4;
extern int D_0021A0C8;
extern char D_0021A0D0;

struct Obj;
extern void func_141AF8(struct Obj *p);
extern int func_13E930(int id);
extern void func_141B48(struct Obj *p, int v);

void func_0CDD40(struct Obj *o)
{
    func_141AF8(o);
    D_0021A0C0 = func_13E930(0xA8A);
    D_0021A0C4 = func_13E930(0x327);
    D_0021A0C8 = func_13E930(0x218);
    D_0021A0D0 = 0;
    func_141B48(o, 0x18);
}
