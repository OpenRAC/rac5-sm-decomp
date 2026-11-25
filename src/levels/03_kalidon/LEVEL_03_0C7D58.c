/* LEVEL_03:0x0C7D58 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_00219280;
extern int D_00219284;
extern int D_00219288;
extern unsigned char D_00219290;
extern void func_133A40(void *p);
extern int func_130878(int id);
extern void func_133A90(void *p, int a);

void func_0C7D58(void *p)
{
    func_133A40(p);
    D_00219280 = func_130878(0xA89);
    D_00219284 = func_130878(0xA8B);
    D_00219288 = func_130878(0xA8C);
    D_00219290 = 1;
    func_133A90(p, 0x18);
}
