/* LEVEL_18:0x0B5F40 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_1109F8(char *o);
extern int func_10DFE0(int key);
extern void func_110A48(char *o, int mode);
extern int D_001B00F8;
extern int D_001B00FC;
extern int D_001B0100;
extern unsigned char D_001B0108;

void func_0B5F40(char *o)
{
    func_1109F8(o);
    D_001B00F8 = func_10DFE0(0xA83);
    D_001B00FC = func_10DFE0(0x327);
    D_001B0100 = func_10DFE0(0x218);
    D_001B0108 = 0;
    func_110A48(o, 0x18);
}
