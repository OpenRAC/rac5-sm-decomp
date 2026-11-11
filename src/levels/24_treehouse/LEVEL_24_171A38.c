extern int func_172EF8(float *out, void *a, void *b, float r1, float r2);

void func_171A38(char *record)
{
    float scratch[4];
    char *nested = *(char **)(record + 0x58);
    func_172EF8(scratch, record, *(void **)(nested + 4), 10.0f, 0.9f);
}
