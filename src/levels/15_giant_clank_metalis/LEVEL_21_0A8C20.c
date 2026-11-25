/* LEVEL_21:0x0A8C20 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_00155880;
extern int D_00155884;
extern int D_00155888;
extern unsigned char D_00155890;

struct Obj;
struct S;
extern void func_0F4540(struct Obj *p);
extern int func_0F1378(int index);
extern void func_0F4590(struct S *p, int v);

void func_0A8C20(struct Obj *p)
{
    func_0F4540(p);
    D_00155880 = func_0F1378(0xA86);
    D_00155884 = func_0F1378(0x327);
    D_00155888 = func_0F1378(0x218);
    D_00155890 = 0;
    func_0F4590((struct S *)p, 0x18);
}
