/* LEVEL_20:0x0AECC0 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_0E3AC8(void);
extern void func_07FDC0(void);
extern void func_000CB0(int, int, int);
extern void func_032370(void *);
extern int func_08F6B0(int);
extern char D_00002BC0[];

void func_0AECC0(void)
{
    func_0E3AC8();
    func_07FDC0();
    func_000CB0(0, (int)D_00002BC0, 0);
    func_032370((void *)1);
    func_08F6B0(7);
}
