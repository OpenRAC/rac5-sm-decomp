extern char *D_0018E2DC;
unsigned long long func_003190(void)
{
    unsigned long long bits = *(unsigned long long *)(D_0018E2DC + 0x40);
    unsigned char high = (unsigned char)(bits >> 6);
    unsigned long long result = 0;
    if ((high & 1) == 0) {
        unsigned char low = (unsigned char)(bits >> 3);
        result = (low & 1) ^ 1;
    }
    return result;
}