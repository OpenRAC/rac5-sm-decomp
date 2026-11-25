/* LEVEL_16:0x0B6BE0 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_001AEC78;
extern int D_001AEC7C;
extern int D_001AEC80;
extern unsigned char D_001AEC88;
extern void func_111D48(void *p);
extern int func_10F330(int id);
extern void func_111D98(void *p, int a);

void func_0B6BE0(void *p)
{
    func_111D48(p);
    D_001AEC78 = func_10F330(0xA89);
    D_001AEC7C = func_10F330(0xA8B);
    D_001AEC80 = func_10F330(0xA8C);
    D_001AEC88 = 1;
    func_111D98(p, 0x18);
}
