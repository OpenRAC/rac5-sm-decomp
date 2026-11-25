/* LEVEL_17:0x0B64A8 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_1112C0(char *o);
extern int func_10E8A8(int key);
extern void func_111310(char *o, int mode);
extern int D_001A2278;
extern int D_001A227C;
extern int D_001A2280;
extern unsigned char D_001A2288;

void func_0B64A8(char *o)
{
    func_1112C0(o);
    D_001A2278 = func_10E8A8(0xA83);
    D_001A227C = func_10E8A8(0x327);
    D_001A2280 = func_10E8A8(0x218);
    D_001A2288 = 0;
    func_111310(o, 0x18);
}
