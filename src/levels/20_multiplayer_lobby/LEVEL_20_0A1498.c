/* LEVEL_20:0x0A1498 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_0E4B30(char *o);
extern int func_0E2118(int key);
extern void func_0E4B80(char *o, int mode);
extern int D_00111358;
extern int D_0011135C;
extern int D_00111360;
extern unsigned char D_00111368;

void func_0A1498(char *o)
{
    func_0E4B30(o);
    D_00111358 = func_0E2118(0xA83);
    D_0011135C = func_0E2118(0x327);
    D_00111360 = func_0E2118(0x218);
    D_00111368 = 0;
    func_0E4B80(o, 0x18);
}
