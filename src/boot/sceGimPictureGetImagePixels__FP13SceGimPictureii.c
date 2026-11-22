/* boot:0x01E81620 -- returns one pixel of a Gim picture image with the row wrapped into range, or 0 when out of bounds. Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/sceGimPictureGetImagePixels__FP13SceGimPictureii_LEVEL_01.c (sceGimPictureGetImagePixels__FP13SceGimPictureii_LEVEL_01). */
int sceGimPictureGetImagePixels__FP13SceGimPictureii(char *object, int column, int row)
{
    char *table;
    int width;
    int height;

    if (object == 0)
        return 0;
    table = *(char **)(object + 0xc);
    if (table == 0)
        return 0;
    width = *(unsigned short *)(table + 0x2a);
    height = *(unsigned short *)(table + 0x2e);
    if (column < 0 || column >= width)
        return 0;
    row %= height;
    if (row < 0)
        row += height;
    return *(int *)(table + *(int *)(table + 0x18) +
                    4 * (width * row + column));
}
