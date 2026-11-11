extern void func_1294E8(void *, float, float);
extern void func_128080(float *, void *, void *);

void func_0699F8(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_1294E8(buffer, a, b);
    func_128080(v, buffer, record + 0xe58);
}
