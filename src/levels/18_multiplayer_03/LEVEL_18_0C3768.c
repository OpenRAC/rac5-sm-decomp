/* LEVEL_18:0x0C3768 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_10F990(void);
extern void func_0946D8(void);
extern void func_000CF0(int, int, int);
extern void func_036918(void *);
extern int func_0A40A8(int);
extern char D_00002C70[];

void func_0C3768(void)
{
    func_10F990();
    func_0946D8();
    func_000CF0(0, (int)D_00002C70, 0);
    func_036918((void *)1);
    func_0A40A8(7);
}
