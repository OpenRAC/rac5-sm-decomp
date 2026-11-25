/* LEVEL_01:0x0D5098 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_133F70(void);
extern void func_0A6448(void);
extern void func_001088(int, int, int);
extern void func_03C120(void *);
extern int func_0B6020(int);
extern char D_00003008[];

void func_0D5098(void)
{
    func_133F70();
    func_0A6448();
    func_001088(0, (int)D_00003008, 0);
    func_03C120((void *)1);
    func_0B6020(7);
}
