/* LEVEL_19:0x0B6840 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_1123E8(char *o);
extern int func_10F9D0(int key);
extern void func_112438(char *o, int mode);
extern int D_001AFDF8;
extern int D_001AFDFC;
extern int D_001AFE00;
extern unsigned char D_001AFE08;

void func_0B6840(char *o)
{
    func_1123E8(o);
    D_001AFDF8 = func_10F9D0(0xA83);
    D_001AFDFC = func_10F9D0(0x327);
    D_001AFE00 = func_10F9D0(0x218);
    D_001AFE08 = 0;
    func_112438(o, 0x18);
}
