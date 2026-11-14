/* LEVEL_06:0x198E70 -- flags the object's state block and writes the negated x and z of the object to the output pair. */
extern char D_001F7B88[];

char *func_198E70(float *object, float *out)
{
    *(unsigned char *)(*(char **)((char *)object + 0x58) + 0x16) = 1;
    out[0] = -object[0];
    out[1] = -object[2];
    return D_001F7B88;
}
