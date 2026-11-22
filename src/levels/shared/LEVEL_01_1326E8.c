/* LEVEL_01:0x1326E8 -- copies the eight words at offset 0x18 of a record to the destination; reports 0 for a null record. */
int func_1326E8(char *src, int *dst)
{
    unsigned int i;
    int *p;

    if (src != 0) {
        p = (int *)(src + 0x18);
        for (i = 0; i < 8; i++) {
            *dst++ = *p++;
        }
        return 1;
    }
    return 0;
}
