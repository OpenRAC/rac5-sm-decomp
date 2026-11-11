extern unsigned char D_001E6825;
extern unsigned char D_001E6824;
extern unsigned char D_001E6826;
void func_0B8738(void)
{
    --D_001E6825;
    if (D_001E6825 == 0) {
        D_001E6825 = D_001E6826;
        D_001E6824 ^= 1;
    }
}