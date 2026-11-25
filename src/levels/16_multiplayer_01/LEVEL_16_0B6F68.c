/* LEVEL_16:0x0B6F68 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_111D48(char *o);
extern int func_10F330(int key);
extern void func_111D98(char *o, int mode);
extern int D_001AEC78;
extern int D_001AEC7C;
extern int D_001AEC80;
extern unsigned char D_001AEC88;

void func_0B6F68(char *o)
{
    func_111D48(o);
    D_001AEC78 = func_10F330(0xA83);
    D_001AEC7C = func_10F330(0x327);
    D_001AEC80 = func_10F330(0x218);
    D_001AEC88 = 0;
    func_111D98(o, 0x18);
}
