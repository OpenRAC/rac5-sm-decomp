/* LEVEL_01:0x120FB8 -- blends two packed four-channel colours: each byte of the first moves toward the matching byte of the second by the given fraction. */
unsigned int func_120FB8(unsigned int a, unsigned int b, float t)
{
    unsigned int r;
    unsigned int x24;
    unsigned int x16;
    unsigned int x8;
    unsigned int x0;

    x24 = a >> 24;
    r = ((int)((float)(int)((b >> 24) - x24) * t) + x24) << 24;
    x16 = (a >> 16) & 0xFF;
    r |= ((int)((float)(int)(((b >> 16) & 0xFF) - x16) * t) + x16) << 16;
    x8 = (a >> 8) & 0xFF;
    r |= ((int)((float)(int)(((b >> 8) & 0xFF) - x8) * t) + x8) << 8;
    x0 = a & 0xFF;
    r |= ((int)((float)(int)((b & 0xFF) - x0) * t) + x0);
    return r;
}
