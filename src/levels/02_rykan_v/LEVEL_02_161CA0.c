/* LEVEL_02:0x161CA0 -- stores the ids looked up for two fixed hashes into two globals. */
extern int D_0021C45C;
extern int D_0021C460;
extern int func_130418(unsigned int value);

void func_161CA0(void)
{
    D_0021C45C = func_130418(0x99C473CAu);
    D_0021C460 = func_130418(0x89436D18u);
}
