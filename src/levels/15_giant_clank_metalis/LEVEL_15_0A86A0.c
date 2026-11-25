/* LEVEL_15:0x0A86A0 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_00155880;
extern int D_00155884;
extern int D_00155888;
extern unsigned char D_00155890;
typedef struct Obj Obj;
extern void func_0F4540(Obj *o);
extern int func_0F1378(int value);
extern void func_0F4590(Obj *o, int value);

void func_0A86A0(Obj *o)
{
    func_0F4540(o);
    D_00155880 = func_0F1378(0xA59);
    D_00155884 = func_0F1378(0x30B);
    D_00155888 = func_0F1378(0x218);
    D_00155890 = 1;
    func_0F4590(o, 0x18);
}
