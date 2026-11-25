/* LEVEL_09:0x0C55A8 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_12E610(char *o);
extern int func_12B448(int key);
extern void func_12E660(char *o, int mode);
extern int D_001EAA00;
extern int D_001EAA04;
extern int D_001EAA08;
extern unsigned char D_001EAA10;

void func_0C55A8(char *o)
{
    func_12E610(o);
    D_001EAA00 = func_12B448(0xA83);
    D_001EAA04 = func_12B448(0x327);
    D_001EAA08 = func_12B448(0x218);
    D_001EAA10 = 0;
    func_12E660(o, 0x18);
}
