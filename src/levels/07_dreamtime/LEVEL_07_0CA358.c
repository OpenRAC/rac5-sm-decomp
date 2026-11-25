/* LEVEL_07:0x0CA358 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_138678(char *o);
extern int func_1354B0(int key);
extern void func_1386C8(char *o, int mode);
extern int D_00214F00;
extern int D_00214F04;
extern int D_00214F08;
extern unsigned char D_00214F10;

void func_0CA358(char *o)
{
    func_138678(o);
    D_00214F00 = func_1354B0(0xA83);
    D_00214F04 = func_1354B0(0x327);
    D_00214F08 = func_1354B0(0x218);
    D_00214F10 = 0;
    func_1386C8(o, 0x18);
}
