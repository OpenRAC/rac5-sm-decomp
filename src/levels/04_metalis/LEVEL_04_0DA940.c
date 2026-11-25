/* LEVEL_04:0x0DA940 -- placement copy of LEVEL_02_0DBA28.c: placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_1403F0(void);
extern void func_0AB658(void);
extern void func_000E90(int, int, int);
extern void func_03DB20(void *);
extern int func_0BB828(int);
extern char D_00002E10[];

void func_0DA940(void)
{
    func_1403F0();
    func_0AB658();
    func_000E90(0, (int)D_00002E10, 0);
    func_03DB20((void *)1);
    func_0BB828(7);
}
