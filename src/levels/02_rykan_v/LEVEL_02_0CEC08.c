/* LEVEL_02:0x0CEC08 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_13BA28(char *o);
extern int func_138860(int key);
extern void func_13BA78(char *o, int mode);
extern int D_00215BC0;
extern int D_00215BC4;
extern int D_00215BC8;
extern unsigned char D_00215BD0;

void func_0CEC08(char *o)
{
    func_13BA28(o);
    D_00215BC0 = func_138860(0xA83);
    D_00215BC4 = func_138860(0x327);
    D_00215BC8 = func_138860(0x218);
    D_00215BD0 = 0;
    func_13BA78(o, 0x18);
}
