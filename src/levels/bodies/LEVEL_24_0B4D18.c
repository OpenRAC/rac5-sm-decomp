extern unsigned char D_001CD6A5;
extern unsigned char D_001CD6A4;
extern unsigned char D_001CD6A6;
void func_0B4D18(void)
{
    --D_001CD6A5;
    if (D_001CD6A5 == 0) {
        D_001CD6A5 = D_001CD6A6;
        D_001CD6A4 ^= 1;
    }
}