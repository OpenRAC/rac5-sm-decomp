/* LEVEL_03:0x0C80E0 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_133A40(char *o);
extern int func_130878(int key);
extern void func_133A90(char *o, int mode);
extern int D_00219280;
extern int D_00219284;
extern int D_00219288;
extern unsigned char D_00219290;

void func_0C80E0(char *o)
{
    func_133A40(o);
    D_00219280 = func_130878(0xA83);
    D_00219284 = func_130878(0x327);
    D_00219288 = func_130878(0x218);
    D_00219290 = 0;
    func_133A90(o, 0x18);
}
