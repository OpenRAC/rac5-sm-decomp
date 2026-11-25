/* LEVEL_23:0x0BF098 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_126DF0(char *o);
extern int func_123C28(int key);
extern void func_126E40(char *o, int mode);
extern int D_001D4000;
extern int D_001D4004;
extern int D_001D4008;
extern unsigned char D_001D4010;

void func_0BF098(char *o)
{
    func_126DF0(o);
    D_001D4000 = func_123C28(0xA83);
    D_001D4004 = func_123C28(0x327);
    D_001D4008 = func_123C28(0x218);
    D_001D4010 = 0;
    func_126E40(o, 0x18);
}
