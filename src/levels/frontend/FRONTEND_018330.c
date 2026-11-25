/* FRONTEND:0x018330 -- placement copy of LEVEL_24_0C1BC0.c: placement copy of LEVEL_01_0C82F8.c: looks up the handles of three fixed keys, keeps them in globals, clears the ready byte and finishes the object. */
extern void func_022938(char *o);
extern int func_01F778(int key);
extern void func_022988(char *o, int mode);
extern int D_00030480;
extern int D_00030484;
extern int D_00030488;
extern unsigned char D_00030490;

void func_018330(char *o)
{
    func_022938(o);
    D_00030480 = func_01F778(0xA83);
    D_00030484 = func_01F778(0x327);
    D_00030488 = func_01F778(0x218);
    D_00030490 = 0;
    func_022988(o, 0x18);
}
