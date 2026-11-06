extern unsigned char D_001CFE25;
extern unsigned char D_001CFE24;
extern unsigned char D_001CFE26;
void func_0B2220(void)
{
    --D_001CFE25;
    if (D_001CFE25 == 0) {
        D_001CFE25 = D_001CFE26;
        D_001CFE24 ^= 1;
    }
}