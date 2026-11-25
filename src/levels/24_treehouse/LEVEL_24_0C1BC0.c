/* LEVEL_24:0x0C1BC0 -- placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_12B178(char *o);
extern int func_127FB0(int key);
extern void func_12B1C8(char *o, int mode);
extern int D_001D1880;
extern int D_001D1884;
extern int D_001D1888;
extern unsigned char D_001D1890;

void func_0C1BC0(char *o)
{
    func_12B178(o);
    D_001D1880 = func_127FB0(0xA83);
    D_001D1884 = func_127FB0(0x327);
    D_001D1888 = func_127FB0(0x218);
    D_001D1890 = 0;
    func_12B1C8(o, 0x18);
}
