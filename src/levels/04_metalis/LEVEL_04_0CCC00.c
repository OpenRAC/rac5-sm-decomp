/* LEVEL_04:0x0CCC00 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_0021A0C0;
extern int D_0021A0C4;
extern int D_0021A0C8;
extern char D_0021A0D0;

struct Obj {
    char pad00[0x10];
};

extern void func_141AF8(struct Obj *p);
extern int func_13E930(int id);
extern void func_141B48(struct Obj *p, int v);

void func_0CCC00(struct Obj *o)
{
    func_141AF8(o);
    D_0021A0C0 = func_13E930(0xA85);
    D_0021A0C4 = func_13E930(0x30A);
    D_0021A0C8 = func_13E930(0x219);
    D_0021A0D0 = 0;
    func_141B48(o, 0x18);
}
