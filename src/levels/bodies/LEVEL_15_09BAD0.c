extern unsigned char D_001516A5;
extern unsigned char D_001516A4;
extern unsigned char D_001516A6;
void func_09BAD0(void)
{
    --D_001516A5;
    if (D_001516A5 == 0) {
        D_001516A5 = D_001516A6;
        D_001516A4 ^= 1;
    }
}