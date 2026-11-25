/* LEVEL_23:0x0BED10 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_001D4000;
extern int D_001D4004;
extern int D_001D4008;
extern unsigned char D_001D4010;
extern void func_126DF0(void *p);
extern int func_123C28(int id);
extern void func_126E40(void *p, int a);

void func_0BED10(void *p)
{
    func_126DF0(p);
    D_001D4000 = func_123C28(0xA89);
    D_001D4004 = func_123C28(0xA8B);
    D_001D4008 = func_123C28(0xA8C);
    D_001D4010 = 1;
    func_126E40(p, 0x18);
}
