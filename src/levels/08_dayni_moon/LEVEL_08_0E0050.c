/* LEVEL_08:0x0E0050 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_1454A8(void);
extern void func_0B0D40(void);
extern void func_001088(int, int, int);
extern void func_041208(void *);
extern int func_0C0F10(int);
extern char D_00003028[];

void func_0E0050(void)
{
    func_1454A8();
    func_0B0D40();
    func_001088(0, (int)D_00003028, 0);
    func_041208((void *)1);
    func_0C0F10(7);
}
