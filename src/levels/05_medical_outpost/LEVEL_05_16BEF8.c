/* LEVEL_05:0x16BEF8 -- runs the module setup and caches the ids of two named assets. */
extern void func_072FF8(void);
extern int func_1259E0(unsigned int);
extern int D_001F6AA4;
extern int D_001F6AA8;

void func_16BEF8(void)
{
    func_072FF8();
    D_001F6AA4 = func_1259E0(0x339C0134u);
    D_001F6AA8 = func_1259E0(0xBA947320u);
}
