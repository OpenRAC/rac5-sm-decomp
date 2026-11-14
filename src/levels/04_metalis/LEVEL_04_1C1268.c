/* LEVEL_04:0x1C1268 -- placement copy of LEVEL_01_1B4268.c: initialises two helpers and fills a three-entry table by running each source entry through a converter. */
extern unsigned int D_00240F98[3];
extern unsigned int D_00222500[3];
extern void func_1EE8B8(void);
extern void func_0F6C80(int a);
extern unsigned int func_1364E8(unsigned int v);

void func_1C1268(void)
{
    unsigned int i;

    func_1EE8B8();
    func_0F6C80(0x1F);
    for (i = 0; i < 3; i++)
        D_00222500[i] = func_1364E8(D_00240F98[i]);
}
