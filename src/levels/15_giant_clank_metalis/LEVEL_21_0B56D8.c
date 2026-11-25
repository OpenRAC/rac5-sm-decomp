/* LEVEL_21:0x0B56D8 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_0F2E38(void);
extern void func_086D10(void);
extern void func_000BE0(int, int, int);
extern void func_02F9D8(void *);
extern int func_096530(int);
extern char D_00002B60[];

void func_0B56D8(void)
{
    func_0F2E38();
    func_086D10();
    func_000BE0(0, (int)D_00002B60, 0);
    func_02F9D8((void *)1);
    func_096530(7);
}
