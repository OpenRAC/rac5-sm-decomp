/* LEVEL_06:0x0C2958 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_001EFB00;
extern int D_001EFB04;
extern int D_001EFB08;
extern unsigned char D_001EFB10;
typedef struct Obj Obj;
extern void func_12BD48(Obj *o);
extern int func_128B80(int value);
extern void func_12BD98(Obj *o, int value);

void func_0C2958(Obj *o)
{
    func_12BD48(o);
    D_001EFB00 = func_128B80(0xA59);
    D_001EFB04 = func_128B80(0x30B);
    D_001EFB08 = func_128B80(0x218);
    D_001EFB10 = 1;
    func_12BD98(o, 0x18);
}
