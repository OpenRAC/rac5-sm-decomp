extern unsigned char D_00210D25;
extern unsigned char D_00210D24;
extern unsigned char D_00210D26;
void func_0BD4E8(void)
{
    --D_00210D25;
    if (D_00210D25 == 0) {
        D_00210D25 = D_00210D26;
        D_00210D24 ^= 1;
    }
}