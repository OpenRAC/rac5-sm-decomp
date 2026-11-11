extern unsigned char D_001AAAA5;
extern unsigned char D_001AAAA4;
extern unsigned char D_001AAAA6;
void func_0AA4D8(void)
{
    --D_001AAAA5;
    if (D_001AAAA5 == 0) {
        D_001AAAA5 = D_001AAAA6;
        D_001AAAA4 ^= 1;
    }
}