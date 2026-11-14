/* LEVEL_01:0x158E60 -- clears the record's first float and passes it to the helper together with the object's vector; returns 1. */
extern void func_0639E8(char *dst, char *src, float value);

int func_158E60(char *o)
{
    char *rec = *(char **)(o + 0x58);

    *(int *)(rec + 4) = 0;
    func_0639E8(o + 0x6C, rec + 4, *(float *)(rec + 4));
    return 1;
}
