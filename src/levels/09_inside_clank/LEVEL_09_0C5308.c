/* LEVEL_09:0x0C5308 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_001EAA00;
extern int D_001EAA04;
extern int D_001EAA08;
extern unsigned char D_001EAA10;
typedef struct Obj Obj;
extern void func_12E610(Obj *o);
extern int func_12B448(int value);
extern void func_12E660(Obj *o, int value);

void func_0C5308(Obj *o)
{
    func_12E610(o);
    D_001EAA00 = func_12B448(0xA59);
    D_001EAA04 = func_12B448(0x30B);
    D_001EAA08 = func_12B448(0x218);
    D_001EAA10 = 1;
    func_12E660(o, 0x18);
}
