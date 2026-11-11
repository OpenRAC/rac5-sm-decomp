/* LEVEL_02:0x1D9670 -- copies two floats from a 16-byte record into out[0] and out[2]. */
typedef unsigned int u32;

void func_1D9670(char *object, unsigned int index, float *out)
{
    char *base = *(char **)(object + 0x54);
    unsigned int slot = index & 0xFFu;
    char *rec = (char *)(((slot << 4) + (u32)base));
    rec = rec + 4;
    out[0] = *(float *)rec;
    out[2] = *(float *)(rec + 4);
}
