/* FRONTEND:0x018090 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_00030480;
extern int D_00030484;
extern int D_00030488;
extern unsigned char D_00030490;
typedef struct Obj Obj;
extern void func_022938(Obj *o);
extern int func_01F778(int value);
extern void func_022988(Obj *o, int value);

void func_018090(Obj *o)
{
    func_022938(o);
    D_00030480 = func_01F778(0xA59);
    D_00030484 = func_01F778(0x30B);
    D_00030488 = func_01F778(0x218);
    D_00030490 = 1;
    func_022988(o, 0x18);
}
