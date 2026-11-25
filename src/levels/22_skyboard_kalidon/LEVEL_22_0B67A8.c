/* LEVEL_22:0x0B67A8 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_10CB48(char *o);
extern int func_109980(int key);
extern void func_10CB98(char *o, int mode);
extern int D_0015FF80;
extern int D_0015FF84;
extern int D_0015FF88;
extern unsigned char D_0015FF90;

void func_0B67A8(char *o)
{
    func_10CB48(o);
    D_0015FF80 = func_109980(0xA83);
    D_0015FF84 = func_109980(0x327);
    D_0015FF88 = func_109980(0x218);
    D_0015FF90 = 0;
    func_10CB98(o, 0x18);
}
