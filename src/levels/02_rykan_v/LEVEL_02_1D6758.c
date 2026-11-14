/* LEVEL_02:0x1D6758 -- placement copy of LEVEL_01_1B4268.c: initialises two helpers and fills a three-entry table by running each source entry through a converter. */
extern unsigned int D_002406C0[3];
extern unsigned int D_0021DE78[3];
extern void func_1EC568(void);
extern void func_0F58F8(int a);
extern unsigned int func_130418(unsigned int v);

void func_1D6758(void)
{
    unsigned int i;

    func_1EC568();
    func_0F58F8(0x1F);
    for (i = 0; i < 3; i++)
        D_0021DE78[i] = func_130418(D_002406C0[i]);
}
