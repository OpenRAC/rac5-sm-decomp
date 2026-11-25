/* LEVEL_03:0x0D4E80 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_132338(void);
extern void func_0A61C8(void);
extern void func_001088(int, int, int);
extern void func_03A3C0(void *);
extern int func_0B5E08(int);
extern char D_00003030[];

void func_0D4E80(void)
{
    func_132338();
    func_0A61C8();
    func_001088(0, (int)D_00003030, 0);
    func_03A3C0((void *)1);
    func_0B5E08(7);
}
