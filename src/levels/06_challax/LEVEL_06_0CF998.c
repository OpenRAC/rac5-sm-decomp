/* LEVEL_06:0x0CF998 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_12A640(void);
extern void func_0A0C18(void);
extern void func_001088(int, int, int);
extern void func_038828(void *);
extern int func_0B0848(int);
extern char D_00003008[];

void func_0CF998(void)
{
    func_12A640();
    func_0A0C18();
    func_001088(0, (int)D_00003008, 0);
    func_038828((void *)1);
    func_0B0848(7);
}
