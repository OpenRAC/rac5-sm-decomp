/* LEVEL_07:0x0CA638 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_00214F00;
extern int D_00214F04;
extern int D_00214F08;
extern unsigned char D_00214F10;

struct Obj;
struct S;
extern void func_138678(struct Obj *p);
extern int func_1354B0(int index);
extern void func_1386C8(struct S *p, int v);

void func_0CA638(struct Obj *p)
{
    func_138678(p);
    D_00214F00 = func_1354B0(0xA86);
    D_00214F04 = func_1354B0(0x327);
    D_00214F08 = func_1354B0(0x218);
    D_00214F10 = 0;
    func_1386C8((struct S *)p, 0x18);
}
