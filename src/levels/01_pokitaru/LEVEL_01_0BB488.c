extern unsigned char D_001FCA25;
extern unsigned char D_001FCA24;
extern unsigned char D_001FCA26;
void func_0BB488(void)
{
    --D_001FCA25;
    if (D_001FCA25 == 0) {
        D_001FCA25 = D_001FCA26;
        D_001FCA24 ^= 1;
    }
}