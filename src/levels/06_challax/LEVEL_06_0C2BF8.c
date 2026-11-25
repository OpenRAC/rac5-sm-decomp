/* LEVEL_06:0x0C2BF8 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_12BD48(char *o);
extern int func_128B80(int key);
extern void func_12BD98(char *o, int mode);
extern int D_001EFB00;
extern int D_001EFB04;
extern int D_001EFB08;
extern unsigned char D_001EFB10;

void func_0C2BF8(char *o)
{
    func_12BD48(o);
    D_001EFB00 = func_128B80(0xA83);
    D_001EFB04 = func_128B80(0x327);
    D_001EFB08 = func_128B80(0x218);
    D_001EFB10 = 0;
    func_12BD98(o, 0x18);
}
