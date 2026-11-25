/* LEVEL_21:0x0A8940 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_0F4540(char *o);
extern int func_0F1378(int key);
extern void func_0F4590(char *o, int mode);
extern int D_00155880;
extern int D_00155884;
extern int D_00155888;
extern unsigned char D_00155890;

void func_0A8940(char *o)
{
    func_0F4540(o);
    D_00155880 = func_0F1378(0xA83);
    D_00155884 = func_0F1378(0x327);
    D_00155888 = func_0F1378(0x218);
    D_00155890 = 0;
    func_0F4590(o, 0x18);
}
