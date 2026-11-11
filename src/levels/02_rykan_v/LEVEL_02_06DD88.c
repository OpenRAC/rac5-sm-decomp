extern void func_12C840(void *, float, float);
extern void func_12AF98(float *, void *, void *);

void func_06DD88(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_12C840(buffer, a, b);
    func_12AF98(v, buffer, record + 0xe58);
}
