extern unsigned char D_002150A5;
extern unsigned char D_002150A4;
extern unsigned char D_002150A6;
void func_0BB270(void)
{
    --D_002150A5;
    if (D_002150A5 == 0) {
        D_002150A5 = D_002150A6;
        D_002150A4 ^= 1;
    }
}