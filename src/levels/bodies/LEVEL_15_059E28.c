extern void func_0EB068(void *, float, float);
extern void func_0EA110(float *, void *, void *);

void func_059E28(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_0EB068(buffer, a, b);
    func_0EA110(v, buffer, record + 0xe58);
}
