/* LEVEL_03:0x1AC038 -- looks up four fixed ids and stores the handles in four consecutive globals. */
extern int D_003B2160;
extern int D_003B2164;
extern int D_003B2168;
extern int D_003B216C;
extern int func_1282D0(unsigned int id);

void func_1AC038(void)
{
    D_003B2160 = func_1282D0(0xD0E658AFu);
    D_003B2164 = func_1282D0(0x77F6A2E9u);
    D_003B2168 = func_1282D0(0xB9B8B0DAu);
    D_003B216C = func_1282D0(0x2112B131u);
}
