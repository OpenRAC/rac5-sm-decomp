/* LEVEL_09:0x1A0748 -- runs the setup helper, stores the hash lookup of the shifted global id and finishes with the follow-up call. */
extern unsigned int D_0027F60C;
extern int D_001F2A04;
extern void func_1B5CB8(void);
extern int func_0F89E0(unsigned int value);
extern void func_070AF0(void);

void func_1A0748(void)
{
    func_1B5CB8();
    D_001F2A04 = func_0F89E0((D_0027F60C << 16) | 0xC0001041);
    func_070AF0();
}
