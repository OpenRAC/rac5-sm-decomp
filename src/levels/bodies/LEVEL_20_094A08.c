extern unsigned char D_0010D185;
extern unsigned char D_0010D184;
extern unsigned char D_0010D186;
void func_094A08(void)
{
    --D_0010D185;
    if (D_0010D185 == 0) {
        D_0010D185 = D_0010D186;
        D_0010D184 ^= 1;
    }
}