/* LEVEL_05:0x0C6518 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_001EFF80;
extern int D_001EFF84;
extern int D_001EFF88;
extern unsigned char D_001EFF90;
extern void func_130FF0(void *p);
extern int func_12DE28(int id);
extern void func_131040(void *p, int a);

void func_0C6518(void *p)
{
    func_130FF0(p);
    D_001EFF80 = func_12DE28(0xA89);
    D_001EFF84 = func_12DE28(0xA8B);
    D_001EFF88 = func_12DE28(0xA8C);
    D_001EFF90 = 1;
    func_131040(p, 0x18);
}
