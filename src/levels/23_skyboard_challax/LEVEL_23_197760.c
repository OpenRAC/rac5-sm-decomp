/* LEVEL_23:0x197760 -- placement copy of LEVEL_01_1B4268.c: initialises two helpers and fills a three-entry table by running each source entry through a converter. */
extern unsigned int D_001F6A30[3];
extern unsigned int D_001DC210[3];
extern void func_1A9268(void);
extern void func_0E2630(int a);
extern unsigned int func_11AEE0(unsigned int v);

void func_197760(void)
{
    unsigned int i;

    func_1A9268();
    func_0E2630(0x1F);
    for (i = 0; i < 3; i++)
        D_001DC210[i] = func_11AEE0(D_001F6A30[i]);
}
