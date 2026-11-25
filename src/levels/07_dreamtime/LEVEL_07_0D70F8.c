/* LEVEL_07:0x0D70F8 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_136F70(void);
extern void func_0A8448(void);
extern void func_001088(int, int, int);
extern void func_03C6D0(void *);
extern int func_0B8080(int);
extern char D_00003008[];

void func_0D70F8(void)
{
    func_136F70();
    func_0A8448();
    func_001088(0, (int)D_00003008, 0);
    func_03C6D0((void *)1);
    func_0B8080(7);
}
