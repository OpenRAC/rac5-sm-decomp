/* LEVEL_22:0x0C35D8 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_10B440(void);
extern void func_094A58(void);
extern void func_000E68(int, int, int);
extern void func_031CC0(void *);
extern int func_0A4570(int);
extern char D_00002D78[];

void func_0C35D8(void)
{
    func_10B440();
    func_094A58();
    func_000E68(0, (int)D_00002D78, 0);
    func_031CC0((void *)1);
    func_0A4570(7);
}
