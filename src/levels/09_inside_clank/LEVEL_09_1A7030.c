/* LEVEL_09:0x1A7030 -- placement copy of LEVEL_01_1B4268.c: initialises two helpers and fills a three-entry table by running each source entry through a converter. */
extern unsigned int D_00210560[3];
extern unsigned int D_001F2B08[3];
extern void func_1C0038(void);
extern void func_0EB628(int a);
extern unsigned int func_123000(unsigned int v);

void func_1A7030(void)
{
    unsigned int i;

    func_1C0038();
    func_0EB628(0x1F);
    for (i = 0; i < 3; i++)
        D_001F2B08[i] = func_123000(D_00210560[i]);
}
