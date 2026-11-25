/* FRONTEND:0x017FB0 -- placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_00030480;
extern int D_00030484;
extern int D_00030488;
extern unsigned char D_00030490;
extern void func_022938(void *p);
extern int func_01F778(int id);
extern void func_022988(void *p, int a);

void func_017FB0(void *p)
{
    func_022938(p);
    D_00030480 = func_01F778(0xA89);
    D_00030484 = func_01F778(0xA8B);
    D_00030488 = func_01F778(0xA8C);
    D_00030490 = 1;
    func_022988(p, 0x18);
}
