/* LEVEL_08:0x1EA3E8 -- placement copy of LEVEL_01_1B4268.c: initialises two helpers and fills a three-entry table by running each source entry through a converter. */
extern unsigned int D_00275660[3];
extern unsigned int D_00252588[3];
extern void func_218C28(void);
extern void func_0FB190(int a);
extern unsigned int func_13B5A0(unsigned int v);

void func_1EA3E8(void)
{
    unsigned int i;

    func_218C28();
    func_0FB190(0x1F);
    for (i = 0; i < 3; i++)
        D_00252588[i] = func_13B5A0(D_00275660[i]);
}
