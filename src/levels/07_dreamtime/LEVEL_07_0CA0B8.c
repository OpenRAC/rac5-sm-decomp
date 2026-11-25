/* LEVEL_07:0x0CA0B8 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_00214F00;
extern int D_00214F04;
extern int D_00214F08;
extern unsigned char D_00214F10;
typedef struct Obj Obj;
extern void func_138678(Obj *o);
extern int func_1354B0(int value);
extern void func_1386C8(Obj *o, int value);

void func_0CA0B8(Obj *o)
{
    func_138678(o);
    D_00214F00 = func_1354B0(0xA59);
    D_00214F04 = func_1354B0(0x30B);
    D_00214F08 = func_1354B0(0x218);
    D_00214F10 = 1;
    func_1386C8(o, 0x18);
}
