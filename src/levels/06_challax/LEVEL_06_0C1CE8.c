/* LEVEL_06:0x0C1CE8 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_001EFB00;
extern int D_001EFB04;
extern int D_001EFB08;
extern char D_001EFB10;

struct Obj {
    char pad00[0x10];
};

extern void func_12BD48(struct Obj *p);
extern int func_128B80(int id);
extern void func_12BD98(struct Obj *p, int v);

void func_0C1CE8(struct Obj *o)
{
    func_12BD48(o);
    D_001EFB00 = func_128B80(0xA85);
    D_001EFB04 = func_128B80(0x30A);
    D_001EFB08 = func_128B80(0x219);
    D_001EFB10 = 0;
    func_12BD98(o, 0x18);
}
