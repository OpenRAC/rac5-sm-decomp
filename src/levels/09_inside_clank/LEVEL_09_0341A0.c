/* LEVEL_09:0x0341A0 -- placement copy of LEVEL_01_037998.c: runs the shared reset sequence, then builds three packed handles from the table's entries 27, 11 and 48 and stores them in their globals. */
extern int D_0027F540[];
extern char D_0021C8C0[];
extern int D_001DE3F0;
extern int D_001DE3F4;
extern int D_001DE3F8;
extern void func_034100(char *obj);
extern void func_062EF0(void);
extern void func_0502D8(void);
extern int func_105C98(unsigned int value);
extern void func_106BB8(unsigned int value);
extern void func_033D48(void);

void func_0341A0(void)
{
    func_034100(D_0021C8C0);
    func_062EF0();
    func_0502D8();
    D_001DE3F4 = func_105C98(((unsigned int)D_0027F540[27] << 16) | 0xA00010C1u);
    D_001DE3F8 = func_105C98(((unsigned int)D_0027F540[11] << 16) | 0xA00010C1u);
    D_001DE3F0 = ((int (*)(unsigned int))func_106BB8)(((unsigned int)D_0027F540[48] << 16) | 0xA0001041u);
    func_033D48();
}
