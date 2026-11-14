/* LEVEL_03:0x1C9358 -- placement copy of LEVEL_01_1B4268.c: initialises two helpers and fills a three-entry table by running each source entry through a converter. */
extern unsigned int D_00242E78[3];
extern unsigned int D_00221DC0[3];
extern void func_1E98D0(void);
extern void func_0EDFE0(int a);
extern unsigned int func_1282D0(unsigned int v);

void func_1C9358(void)
{
    unsigned int i;

    func_1E98D0();
    func_0EDFE0(0x1F);
    for (i = 0; i < 3; i++)
        D_00221DC0[i] = func_1282D0(D_00242E78[i]);
}
