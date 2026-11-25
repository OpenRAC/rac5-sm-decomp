/* LEVEL_05:0x0C68A0 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_130FF0(char *o);
extern int func_12DE28(int key);
extern void func_131040(char *o, int mode);
extern int D_001EFF80;
extern int D_001EFF84;
extern int D_001EFF88;
extern unsigned char D_001EFF90;

void func_0C68A0(char *o)
{
    func_130FF0(o);
    D_001EFF80 = func_12DE28(0xA83);
    D_001EFF84 = func_12DE28(0x327);
    D_001EFF88 = func_12DE28(0x218);
    D_001EFF90 = 0;
    func_131040(o, 0x18);
}
