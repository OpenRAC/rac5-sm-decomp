/* LEVEL_04:0x177350 -- looks up a 0x1C-byte record by an object index, calls a helper with its vector, retrying with a fallback vector when the first call fails. */
extern char D_003B05D0[];
extern char *D_00221E2C;
extern char *func_19AEE8(char *a, char *b, float c, float d, float e);

char *func_177350(char *o)
{
    char *s2;
    float *t;
    char *r;

    s2 = D_00221E2C;
    t = (float *)(D_003B05D0 + (unsigned char)o[0x45] * 0x1C);
    r = func_19AEE8(s2, o, t[0], t[1], t[2]);
    if (r == 0) {
        r = func_19AEE8(s2, o, 1.0000000150474662e+30f, -1.0f, t[2]);
        if (r == 0) {
            return 0;
        }
    }
    return r;
}
