/* LEVEL_04:0x0CDB10 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_141AF8(char *o);
extern int func_13E930(int key);
extern void func_141B48(char *o, int mode);
extern int D_0021A0C0;
extern int D_0021A0C4;
extern int D_0021A0C8;
extern unsigned char D_0021A0D0;

void func_0CDB10(char *o)
{
    func_141AF8(o);
    D_0021A0C0 = func_13E930(0xA83);
    D_0021A0C4 = func_13E930(0x327);
    D_0021A0C8 = func_13E930(0x218);
    D_0021A0D0 = 0;
    func_141B48(o, 0x18);
}
