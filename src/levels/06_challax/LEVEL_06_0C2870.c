/* LEVEL_06:0x0C2870 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_001EFB00;
extern int D_001EFB04;
extern int D_001EFB08;
extern unsigned char D_001EFB10;
extern void func_12BD48(void *p);
extern int func_128B80(int id);
extern void func_12BD98(void *p, int a);

void func_0C2870(void *p)
{
    func_12BD48(p);
    D_001EFB00 = func_128B80(0xA89);
    D_001EFB04 = func_128B80(0xA8B);
    D_001EFB08 = func_128B80(0xA8C);
    D_001EFB10 = 1;
    func_12BD98(p, 0x18);
}
