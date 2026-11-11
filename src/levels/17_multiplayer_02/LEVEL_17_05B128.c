extern void func_1040F0(void *, float, float);
extern void func_103210(float *, void *, void *);

void func_05B128(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_1040F0(buffer, a, b);
    func_103210(v, buffer, record + 0xe58);
}
