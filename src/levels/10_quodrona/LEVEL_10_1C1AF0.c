/* LEVEL_10:0x1C1AF0 -- placement copy of LEVEL_01_1B4268.c: initialises two helpers and fills a three-entry table by running each source entry through a converter. */
extern unsigned int D_00231BB0[3];
extern unsigned int D_00211C58[3];
extern void func_1DD4E0(void);
extern void func_0EF088(int a);
extern unsigned int func_127EC8(unsigned int v);

void func_1C1AF0(void)
{
    unsigned int i;

    func_1DD4E0();
    func_0EF088(0x1F);
    for (i = 0; i < 3; i++)
        D_00211C58[i] = func_127EC8(D_00231BB0[i]);
}
