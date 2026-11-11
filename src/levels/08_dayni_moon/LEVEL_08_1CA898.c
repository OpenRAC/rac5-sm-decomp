/* LEVEL_08:0x1CA898 -- stores the lookup of the shifted global id combined with a fixed tag. */
extern unsigned int D_002E710C;
extern int D_00252074;
extern int func_10D720(unsigned int value);

void func_1CA898(void)
{
    D_00252074 = func_10D720((D_002E710C << 16) | 0xC0001041);
}
