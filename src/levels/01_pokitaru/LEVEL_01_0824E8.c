/* LEVEL_01:0x0824E8 -- writes the midpoint of two points fetched from a source when the fetch succeeds. */
extern int func_081D90(float *first, float *second, void *source);

void func_0824E8(float *out, void *source)
{
    float first[4];
    float second[4];
    int found;
    long long ok;

    found = func_081D90(first, second, source) != 0;
    ok = found;
    if (ok) {
        out[0] = (first[0] + second[0]) * 0.5f;
        out[1] = (first[1] + second[1]) * 0.5f;
        out[2] = (first[2] + second[2]) * 0.5f;
    }
}
