extern unsigned char D_001B00C8[];
extern int D_001B009C;
extern int D_001B00A0;

extern int func_10E8A8(void);

void func_0B3CA8(void)
{
    if (D_001B00C8[0] != 0)
    {
        func_10E8A8();
    }
    D_001B00C8[0] = 0;
    D_001B009C = 0;
    D_001B00A0 = 0;
}
