/* LEVEL_06:0x1A8270 -- placement copy of LEVEL_01_1B4268.c: initialises two helpers and fills a three-entry table by running each source entry through a converter. */
extern unsigned int D_00215800[3];
extern unsigned int D_001F7DB0[3];
extern void func_1C5118(void);
extern void func_0E8808(int a);
extern unsigned int func_1206C0(unsigned int v);

void func_1A8270(void)
{
    unsigned int i;

    func_1C5118();
    func_0E8808(0x1F);
    for (i = 0; i < 3; i++)
        D_001F7DB0[i] = func_1206C0(D_00215800[i]);
}
