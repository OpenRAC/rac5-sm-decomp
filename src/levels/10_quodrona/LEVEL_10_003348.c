extern char *D_001F8254;
unsigned long long func_003348(void)
{
    unsigned long long bits = *(unsigned long long *)(D_001F8254 + 0x40);
    unsigned char high = (unsigned char)(bits >> 6);
    unsigned long long result = 0;
    if ((high & 1) == 0) {
        unsigned char low = (unsigned char)(bits >> 3);
        result = (low & 1) ^ 1;
    }
    return result;
}