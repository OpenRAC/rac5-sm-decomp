/* LEVEL_07:0x0C9FD0 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_00214F00;
extern int D_00214F04;
extern int D_00214F08;
extern unsigned char D_00214F10;
extern void func_138678(void *p);
extern int func_1354B0(int id);
extern void func_1386C8(void *p, int a);

void func_0C9FD0(void *p)
{
    func_138678(p);
    D_00214F00 = func_1354B0(0xA89);
    D_00214F04 = func_1354B0(0xA8B);
    D_00214F08 = func_1354B0(0xA8C);
    D_00214F10 = 1;
    func_1386C8(p, 0x18);
}
