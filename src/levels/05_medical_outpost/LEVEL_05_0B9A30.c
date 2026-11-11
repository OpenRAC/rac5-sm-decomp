extern unsigned char D_001EBDA5;
extern unsigned char D_001EBDA4;
extern unsigned char D_001EBDA6;
void func_0B9A30(void)
{
    --D_001EBDA5;
    if (D_001EBDA5 == 0) {
        D_001EBDA5 = D_001EBDA6;
        D_001EBDA4 ^= 1;
    }
}