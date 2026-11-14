/* LEVEL_08:0x16D218 -- placement copy of LEVEL_01_158E60.c: clears the record's first float and passes it to the helper together with the object's vector; returns 1. */
extern void func_069210(char *dst, char *src, float value);

int func_16D218(char *o)
{
    char *rec = *(char **)(o + 0x58);

    *(int *)(rec + 4) = 0;
    func_069210(o + 0x6C, rec + 4, *(float *)(rec + 4));
    return 1;
}
