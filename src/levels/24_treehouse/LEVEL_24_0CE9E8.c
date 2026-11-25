/* LEVEL_24:0x0CE9E8 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_129A70(void);
extern void func_09FCC0(void);
extern void func_000E90(int, int, int);
extern void func_0351A8(void *);
extern int func_0AF8B0(int);
extern char D_00002E10[];

void func_0CE9E8(void)
{
    func_129A70();
    func_09FCC0();
    func_000E90(0, (int)D_00002E10, 0);
    func_0351A8((void *)1);
    func_0AF8B0(7);
}
