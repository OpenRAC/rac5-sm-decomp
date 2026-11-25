/* LEVEL_17:0x0C3CD0 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_110258(void);
extern void func_094BC0(void);
extern void func_000CF0(int, int, int);
extern void func_037928(void *);
extern int func_0A4590(int);
extern char D_00002C00[];

void func_0C3CD0(void)
{
    func_110258();
    func_094BC0();
    func_000CF0(0, (int)D_00002C00, 0);
    func_037928((void *)1);
    func_0A4590(7);
}
