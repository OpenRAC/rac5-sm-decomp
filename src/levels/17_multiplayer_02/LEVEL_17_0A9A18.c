extern unsigned char D_0019E0A5;
extern unsigned char D_0019E0A4;
extern unsigned char D_0019E0A6;
void func_0A9A18(void)
{
    --D_0019E0A5;
    if (D_0019E0A5 == 0) {
        D_0019E0A5 = D_0019E0A6;
        D_0019E0A4 ^= 1;
    }
}