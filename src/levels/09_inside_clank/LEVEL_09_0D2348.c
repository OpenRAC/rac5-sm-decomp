/* LEVEL_09:0x0D2348 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_12CF08(void);
extern void func_0A36F8(void);
extern void func_001088(int, int, int);
extern void func_0385E0(void *);
extern int func_0B32D0(int);
extern char D_00003008[];

void func_0D2348(void)
{
    func_12CF08();
    func_0A36F8();
    func_001088(0, (int)D_00003008, 0);
    func_0385E0((void *)1);
    func_0B32D0(7);
}
