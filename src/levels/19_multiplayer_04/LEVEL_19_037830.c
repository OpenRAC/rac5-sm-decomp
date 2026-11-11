extern unsigned char g_bRenderPlayerShadow;

void func_037830(char *record)
{
    *(unsigned short *)(record + 0x102) = 0x1c;
    *(unsigned long long *)(record + 0x960) |= 0x10000000000ULL;
    g_bRenderPlayerShadow = 0;
    *(unsigned int *)(*(char **)(record + 0x59c) + 0x78) &= 0xfff0ffffu;
}
