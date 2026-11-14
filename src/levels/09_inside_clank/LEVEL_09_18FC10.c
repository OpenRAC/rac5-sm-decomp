/* LEVEL_09:0x18FC10 -- placement copy of LEVEL_07_1AC550.c: looks up two fixed ids and stores the handles in two consecutive globals. */
extern int D_001F279C;
extern int D_001F27A0;
extern int func_123000(unsigned int id);

void func_18FC10(void)
{
    D_001F279C = func_123000(0x3C51D819u);
    D_001F27A0 = func_123000(0xCF9217BAu);
}
