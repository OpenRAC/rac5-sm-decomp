/* LEVEL_01:0x0C82F8 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_135678(char *o);
extern int func_1324B0(int key);
extern void func_1356C8(char *o, int mode);
extern int D_00200C00;
extern int D_00200C04;
extern int D_00200C08;
extern unsigned char D_00200C10;

void func_0C82F8(char *o)
{
    func_135678(o);
    D_00200C00 = func_1324B0(0xA83);
    D_00200C04 = func_1324B0(0x327);
    D_00200C08 = func_1324B0(0x218);
    D_00200C10 = 0;
    func_1356C8(o, 0x18);
}
