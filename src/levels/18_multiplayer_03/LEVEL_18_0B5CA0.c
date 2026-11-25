/* LEVEL_18:0x0B5CA0 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_001B00F8;
extern int D_001B00FC;
extern int D_001B0100;
extern unsigned char D_001B0108;
typedef struct Obj Obj;
extern void func_1109F8(Obj *o);
extern int func_10DFE0(int value);
extern void func_110A48(Obj *o, int value);

void func_0B5CA0(Obj *o)
{
    func_1109F8(o);
    D_001B00F8 = func_10DFE0(0xA59);
    D_001B00FC = func_10DFE0(0x30B);
    D_001B0100 = func_10DFE0(0x218);
    D_001B0108 = 1;
    func_110A48(o, 0x18);
}
