extern char *D_00143EBC;
unsigned long long func_0030F0(void)
{
    unsigned long long bits = *(unsigned long long *)(D_00143EBC + 0x40);
    unsigned char high = (unsigned char)(bits >> 6);
    unsigned long long result = 0;
    if ((high & 1) == 0) {
        unsigned char low = (unsigned char)(bits >> 3);
        result = (low & 1) ^ 1;
    }
    return result;
}