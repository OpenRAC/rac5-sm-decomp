/* LEVEL_16:0x0C4790 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_110CE0(void);
extern void func_0956C8(void);
extern void func_000CF0(int, int, int);
extern void func_038088(void *);
extern int func_0A50B0(int);
extern char D_00002C00[];

void func_0C4790(void)
{
    func_110CE0();
    func_0956C8();
    func_000CF0(0, (int)D_00002C00, 0);
    func_038088((void *)1);
    func_0A50B0(7);
}
