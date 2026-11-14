/* LEVEL_19:0x176650 -- placement copy of LEVEL_01_1B4268.c: initialises two helpers and fills a three-entry table by running each source entry through a converter. */
extern unsigned int D_001D85C0[3];
extern unsigned int D_001BF570[3];
extern void func_1898D0(void);
extern void func_0D9168(int a);
extern unsigned int func_107538(unsigned int v);

void func_176650(void)
{
    unsigned int i;

    func_1898D0();
    func_0D9168(0x1F);
    for (i = 0; i < 3; i++)
        D_001BF570[i] = func_107538(D_001D85C0[i]);
}
