/* LEVEL_10:0x0D64D8 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_131DF0(void);
extern void func_0A7560(void);
extern void func_000E18(int, int, int);
extern void func_03A808(void *);
extern int func_0B71F8(int);
extern char D_00002DB8[];

void func_0D64D8(void)
{
    func_131DF0();
    func_0A7560();
    func_000E18(0, (int)D_00002DB8, 0);
    func_03A808((void *)1);
    func_0B71F8(7);
}
