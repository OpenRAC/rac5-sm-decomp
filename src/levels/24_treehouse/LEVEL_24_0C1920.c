/* LEVEL_24:0x0C1920 -- placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_001D1880;
extern int D_001D1884;
extern int D_001D1888;
extern unsigned char D_001D1890;
typedef struct Obj Obj;
extern void func_12B178(Obj *o);
extern int func_127FB0(int value);
extern void func_12B1C8(Obj *o, int value);

void func_0C1920(Obj *o)
{
    func_12B178(o);
    D_001D1880 = func_127FB0(0xA59);
    D_001D1884 = func_127FB0(0x30B);
    D_001D1888 = func_127FB0(0x218);
    D_001D1890 = 1;
    func_12B1C8(o, 0x18);
}
