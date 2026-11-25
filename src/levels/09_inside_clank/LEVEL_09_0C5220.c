/* LEVEL_09:0x0C5220 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_001EAA00;
extern int D_001EAA04;
extern int D_001EAA08;
extern unsigned char D_001EAA10;
extern void func_12E610(void *p);
extern int func_12B448(int id);
extern void func_12E660(void *p, int a);

void func_0C5220(void *p)
{
    func_12E610(p);
    D_001EAA00 = func_12B448(0xA89);
    D_001EAA04 = func_12B448(0xA8B);
    D_001EAA08 = func_12B448(0xA8C);
    D_001EAA10 = 1;
    func_12E660(p, 0x18);
}
