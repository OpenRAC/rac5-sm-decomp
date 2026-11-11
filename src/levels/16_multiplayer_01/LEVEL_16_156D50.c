/* LEVEL_16:0x156D50 -- copies four float fields between two records and sets a byte flag. */
void func_156D50(char *object)
{
    char *child = *(char **)(object + 0x58);
    float *dst = (float *)(child + 0x18);
    float a, b, c, d;
    a = *(float *)(object + 0x30);
    c = *(float *)(object + 0x38);
    d = *(float *)(object + 0x20);
    b = *(float *)(object + 0x28);
    dst[0] = a;
    dst[1] = c;
    dst[2] = d;
    dst[3] = b;
    *(unsigned char *)(child + 0x6E) = 10;
}
