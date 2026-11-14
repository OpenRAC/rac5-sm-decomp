/* LEVEL_07:0x1CBAB0 -- placement copy of LEVEL_01_1B4268.c: initialises two helpers and fills a three-entry table by running each source entry through a converter. */
extern unsigned int D_0023E3C0[3];
extern unsigned int D_0021DAB0[3];
extern void func_1E6088(void);
extern void func_0F0548(int a);
extern unsigned int func_12D068(unsigned int v);

void func_1CBAB0(void)
{
    unsigned int i;

    func_1E6088();
    func_0F0548(0x1F);
    for (i = 0; i < 3; i++)
        D_0021DAB0[i] = func_12D068(D_0023E3C0[i]);
}
