/* LEVEL_07:0x0C9448 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_00214F00;
extern int D_00214F04;
extern int D_00214F08;
extern char D_00214F10;

struct Obj {
    char pad00[0x10];
};

extern void func_138678(struct Obj *p);
extern int func_1354B0(int id);
extern void func_1386C8(struct Obj *p, int v);

void func_0C9448(struct Obj *o)
{
    func_138678(o);
    D_00214F00 = func_1354B0(0xA85);
    D_00214F04 = func_1354B0(0x30A);
    D_00214F08 = func_1354B0(0x219);
    D_00214F10 = 0;
    func_1386C8(o, 0x18);
}
