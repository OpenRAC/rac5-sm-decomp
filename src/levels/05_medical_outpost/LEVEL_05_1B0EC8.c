/* LEVEL_05:0x1B0EC8 -- placement copy of LEVEL_01_1B4268.c: initialises two helpers and fills a three-entry table by running each source entry through a converter. */
extern unsigned int D_00214E80[3];
extern unsigned int D_001F7EA8[3];
extern void func_1C6CC8(void);
extern void func_0EB888(int a);
extern unsigned int func_1259E0(unsigned int v);

void func_1B0EC8(void)
{
    unsigned int i;

    func_1C6CC8();
    func_0EB888(0x1F);
    for (i = 0; i < 3; i++)
        D_001F7EA8[i] = func_1259E0(D_00214E80[i]);
}
