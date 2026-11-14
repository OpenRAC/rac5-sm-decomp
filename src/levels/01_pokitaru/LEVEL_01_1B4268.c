/* LEVEL_01:0x1B4268 -- initialises two helpers and fills a three-entry table by running each source entry through a converter. */
extern unsigned int D_00227A80[3];
extern unsigned int D_00208E00[3];
extern void func_1D78D0(void);
extern void func_0EF748(int a);
extern unsigned int func_12A068(unsigned int v);

void func_1B4268(void)
{
    unsigned int i;

    func_1D78D0();
    func_0EF748(0x1F);
    for (i = 0; i < 3; i++)
        D_00208E00[i] = func_12A068(D_00227A80[i]);
}
