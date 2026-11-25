/* LEVEL_08:0x0D3220 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_146BB0(char *o);
extern int func_1439E8(int key);
extern void func_146C00(char *o, int mode);
extern int D_00249AC0;
extern int D_00249AC4;
extern int D_00249AC8;
extern unsigned char D_00249AD0;

void func_0D3220(char *o)
{
    func_146BB0(o);
    D_00249AC0 = func_1439E8(0xA83);
    D_00249AC4 = func_1439E8(0x327);
    D_00249AC8 = func_1439E8(0x218);
    D_00249AD0 = 0;
    func_146C00(o, 0x18);
}
