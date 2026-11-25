/* LEVEL_16:0x0B6058 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_001AEC78;
extern int D_001AEC7C;
extern int D_001AEC80;
extern char D_001AEC88;

struct Obj {
    char pad00[0x10];
};

extern void func_111D48(struct Obj *p);
extern int func_10F330(int id);
extern void func_111D98(struct Obj *p, int v);

void func_0B6058(struct Obj *o)
{
    func_111D48(o);
    D_001AEC78 = func_10F330(0xA85);
    D_001AEC7C = func_10F330(0x30A);
    D_001AEC80 = func_10F330(0x219);
    D_001AEC88 = 0;
    func_111D98(o, 0x18);
}
