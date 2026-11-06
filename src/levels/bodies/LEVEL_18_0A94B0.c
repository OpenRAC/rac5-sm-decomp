extern unsigned char D_001ABF25;
extern unsigned char D_001ABF24;
extern unsigned char D_001ABF26;
void func_0A94B0(void)
{
    --D_001ABF25;
    if (D_001ABF25 == 0) {
        D_001ABF25 = D_001ABF26;
        D_001ABF24 ^= 1;
    }
}