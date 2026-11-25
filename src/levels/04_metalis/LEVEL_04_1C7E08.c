/* LEVEL_04:0x1C7E08 -- on first use merges a field into the top bits of a global word and stores the handle returned for it. */
extern unsigned int D_0022265C;
extern int D_00222660;
extern unsigned int D_002B269C;
extern int func_0F45C8(unsigned int word);

void func_1C7E08(void)
{
    if (D_00222660 == 0) {
        D_0022265C = (D_0022265C & 0xF800FFFF) | (D_002B269C << 16);
        D_00222660 = func_0F45C8(D_0022265C);
    }
}
