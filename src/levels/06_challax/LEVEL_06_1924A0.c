/* LEVEL_06:0x1924A0 -- placement copy of LEVEL_01_19C8C8.c: caches the keyed lookup 0xDA6F64B6 in a global and then loads the resource set. */
extern int D_001F7A1C;
extern int func_1206C0(unsigned int value);
extern void func_1C9110(void);

void func_1924A0(void)
{
    D_001F7A1C = func_1206C0(0xDA6F64B6u);
    func_1C9110();
}
