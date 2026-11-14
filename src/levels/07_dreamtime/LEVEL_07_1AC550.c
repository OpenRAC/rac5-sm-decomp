/* LEVEL_07:0x1AC550 -- looks up two fixed ids and stores the handles in two consecutive globals. */
extern int D_0021D55C;
extern int D_0021D560;
extern int func_12D068(unsigned int id);

void func_1AC550(void)
{
    D_0021D55C = func_12D068(0x3C51D819u);
    D_0021D560 = func_12D068(0xCF9217BAu);
}
