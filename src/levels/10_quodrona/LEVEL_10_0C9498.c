/* LEVEL_10:0x0C9498 -- placement copy of LEVEL_24_0C1920.c: placement copy of LEVEL_01_0C8058.c: runs a setup helper on the object, stores three ids looked up for fixed values and a flag byte into globals, then runs a second helper on the object with 0x18. */
extern int D_00209C00;
extern int D_00209C04;
extern int D_00209C08;
extern unsigned char D_00209C10;
typedef struct Obj Obj;
extern void func_1334F8(Obj *o);
extern int func_130310(int value);
extern void func_133548(Obj *o, int value);

void func_0C9498(Obj *o)
{
    func_1334F8(o);
    D_00209C00 = func_130310(0xA59);
    D_00209C04 = func_130310(0x30B);
    D_00209C08 = func_130310(0x218);
    D_00209C10 = 1;
    func_133548(o, 0x18);
}
