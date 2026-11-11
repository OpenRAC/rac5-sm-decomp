extern unsigned char D_001ABC25;
extern unsigned char D_001ABC24;
extern unsigned char D_001ABC26;
void func_0A9DB0(void)
{
    --D_001ABC25;
    if (D_001ABC25 == 0) {
        D_001ABC25 = D_001ABC26;
        D_001ABC24 ^= 1;
    }
}