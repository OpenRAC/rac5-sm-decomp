/* LEVEL_01:0x19C8C8 -- caches the keyed lookup 0xDA6F64B6 in a global and then loads the resource set. */
extern int D_0020896C;
extern int func_12A068(unsigned int value);
extern void func_1DB8C8(void);

void func_19C8C8(void)
{
    D_0020896C = func_12A068(0xDA6F64B6u);
    func_1DB8C8();
}
