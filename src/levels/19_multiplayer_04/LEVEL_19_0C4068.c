/* LEVEL_19:0x0C4068 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_111380(void);
extern void func_094F58(void);
extern void func_000CF0(int, int, int);
extern void func_037368(void *);
extern int func_0A4928(int);
extern char D_00002C00[];

void func_0C4068(void)
{
    func_111380();
    func_094F58();
    func_000CF0(0, (int)D_00002C00, 0);
    func_037368((void *)1);
    func_0A4928(7);
}
