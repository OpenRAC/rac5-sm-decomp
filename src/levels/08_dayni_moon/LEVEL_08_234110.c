/* LEVEL_08:0x234110 -- placement copy of LEVEL_01_1EB588.c: installs the update callback in its global slot and runs it once. */
extern void (*D_00253530)(void);
extern void func_234138(void);

void func_234110(void)
{
    void (*fn)(void);

    fn = func_234138;
    D_00253530 = fn;
    fn();
}
