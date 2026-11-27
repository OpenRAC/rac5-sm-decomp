/* LEVEL_04:0x0858F8 -- placement copy of LEVEL_01_0824E8.c: writes the midpoint of two points fetched from a source when the fetch succeeds. */
extern int func_0851A0(float *first, float *second, void *source);

void func_0858F8(float *out, void *source)
{
    float first[4];
    float second[4];
    int found;
    long long ok;

    found = func_0851A0(first, second, source) != 0;
    ok = found;
    if (ok) {
        out[0] = (first[0] + second[0]) * 0.5f;
        out[1] = (first[1] + second[1]) * 0.5f;
        out[2] = (first[2] + second[2]) * 0.5f;
    }
}
