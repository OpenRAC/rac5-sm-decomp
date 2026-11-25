/* LEVEL_10:0x0C9738 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_1334F8(char *o);
extern int func_130310(int key);
extern void func_133548(char *o, int mode);
extern int D_00209C00;
extern int D_00209C04;
extern int D_00209C08;
extern unsigned char D_00209C10;

void func_0C9738(char *o)
{
    func_1334F8(o);
    D_00209C00 = func_130310(0xA83);
    D_00209C04 = func_130310(0x327);
    D_00209C08 = func_130310(0x218);
    D_00209C10 = 0;
    func_133548(o, 0x18);
}
