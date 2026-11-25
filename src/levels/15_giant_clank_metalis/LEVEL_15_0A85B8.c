/* LEVEL_15:0x0A85B8 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_00155880;
extern int D_00155884;
extern int D_00155888;
extern unsigned char D_00155890;
extern void func_0F4540(void *p);
extern int func_0F1378(int id);
extern void func_0F4590(void *p, int a);

void func_0A85B8(void *p)
{
    func_0F4540(p);
    D_00155880 = func_0F1378(0xA89);
    D_00155884 = func_0F1378(0xA8B);
    D_00155888 = func_0F1378(0xA8C);
    D_00155890 = 1;
    func_0F4590(p, 0x18);
}
