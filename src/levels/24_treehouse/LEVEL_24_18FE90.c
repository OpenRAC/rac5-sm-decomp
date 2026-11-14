/* LEVEL_24:0x18FE90 -- placement copy of LEVEL_01_1B4268.c: initialises two helpers and fills a three-entry table by running each source entry through a converter. */
extern unsigned int D_001F42F8[3];
extern unsigned int D_001D9C80[3];
extern void func_1A9638(void);
extern void func_0E7358(int a);
extern unsigned int func_11FB68(unsigned int v);

void func_18FE90(void)
{
    unsigned int i;

    func_1A9638();
    func_0E7358(0x1F);
    for (i = 0; i < 3; i++)
        D_001D9C80[i] = func_11FB68(D_001F42F8[i]);
}
