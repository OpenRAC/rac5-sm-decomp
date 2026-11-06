extern unsigned char D_0015BDA5;
extern unsigned char D_0015BDA4;
extern unsigned char D_0015BDA6;
void func_0A9930(void)
{
    --D_0015BDA5;
    if (D_0015BDA5 == 0) {
        D_0015BDA5 = D_0015BDA6;
        D_0015BDA4 ^= 1;
    }
}