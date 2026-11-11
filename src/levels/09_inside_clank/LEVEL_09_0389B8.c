extern unsigned char g_bRenderPlayerShadow;

void func_0389B8(char *record)
{
    *(unsigned short *)(record + 0x102) = 0x1c;
    *(unsigned long long *)(record + 0x960) |= 1ull << 40;
    g_bRenderPlayerShadow = 0;
}
