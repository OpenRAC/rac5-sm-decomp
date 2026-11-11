/* LEVEL_08:0x182B40 -- placement copy of LEVEL_04_177350.c: looks up a 0x1C-byte record by an object index, calls a helper with its vector, retrying with a fallback vector when the first call fails. */
extern char D_003E5B18[];
extern char *D_00251E14;
extern char *func_1BBC18(char *a, char *b, float c, float d, float e);

char *func_182B40(char *o)
{
    char *s2;
    float *t;
    char *r;

    s2 = D_00251E14;
    t = (float *)(D_003E5B18 + (unsigned char)o[0x45] * 0x1C);
    r = func_1BBC18(s2, o, t[0], t[1], t[2]);
    if (r == 0) {
        r = func_1BBC18(s2, o, 1.0000000150474662e+30f, -1.0f, t[2]);
        if (r == 0) {
            return 0;
        }
    }
    return r;
}
