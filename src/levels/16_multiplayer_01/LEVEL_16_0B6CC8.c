/* LEVEL_16:0x0B6CC8 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_001AEC78;
extern int D_001AEC7C;
extern int D_001AEC80;
extern unsigned char D_001AEC88;
typedef struct Obj Obj;
extern void func_111D48(Obj *o);
extern int func_10F330(int value);
extern void func_111D98(Obj *o, int value);

void func_0B6CC8(Obj *o)
{
    func_111D48(o);
    D_001AEC78 = func_10F330(0xA59);
    D_001AEC7C = func_10F330(0x30B);
    D_001AEC80 = func_10F330(0x218);
    D_001AEC88 = 1;
    func_111D98(o, 0x18);
}
