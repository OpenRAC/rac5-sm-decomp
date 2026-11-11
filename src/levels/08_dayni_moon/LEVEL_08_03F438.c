/* LEVEL_08:0x03F438 -- returns 1 for a fixed set of 16-bit type codes. */

int func_03F438(char *a0)
{
    unsigned short v;
    short c;
    int ret;

    ret = 0;
    v = *(unsigned short *)(a0 + 0x100);
    if ((unsigned int)(v - 9) < 3) {
        goto yes;
    }
    c = (short)v;
    if (c == 0x10) goto yes;
    if (c == 0x11) goto yes;
    if (c == 0x12) goto yes;
    if (c == 0x13) goto yes;
    if (c == 0x24) goto yes;
    if (c == 0x17) goto yes;
    if (c == 0x1E) goto yes;
    if (c == 0x38) goto yes;
    if (c == 0x3E) goto yes;
    if (c == 0x3D) goto yes;
    if (c == 0x45) goto yes;
    if (c == 0x48) goto yes;
    goto done;
yes:
    ret = 1;
done:
    return ret;
}
