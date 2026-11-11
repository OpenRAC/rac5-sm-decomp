/* LEVEL_09:0x1920F8 -- placement copy of LEVEL_01_19C8C8.c: caches the keyed lookup 0xDA6F64B6 in a global and then loads the resource set. */
extern int D_001F27C4;
extern int func_123000(unsigned int value);
extern void func_1C4030(void);

void func_1920F8(void)
{
    D_001F27C4 = func_123000(0xDA6F64B6u);
    func_1C4030();
}
