/* LEVEL_05:0x0D3640 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_12F8E8(void);
extern void func_0A4A08(void);
extern void func_001088(int, int, int);
extern void func_039D00(void *);
extern int func_0B45C8(int);
extern char D_00003008[];

void func_0D3640(void)
{
    func_12F8E8();
    func_0A4A08();
    func_001088(0, (int)D_00003008, 0);
    func_039D00((void *)1);
    func_0B45C8(7);
}
