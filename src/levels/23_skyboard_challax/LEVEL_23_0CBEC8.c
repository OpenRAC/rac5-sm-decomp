/* LEVEL_23:0x0CBEC8 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_1256E8(void);
extern void func_09D1B8(void);
extern void func_001088(int, int, int);
extern void func_0355A0(void *);
extern int func_0ACDE8(int);
extern char D_00003008[];

void func_0CBEC8(void)
{
    func_1256E8();
    func_09D1B8();
    func_001088(0, (int)D_00003008, 0);
    func_0355A0((void *)1);
    func_0ACDE8(7);
}
