extern void func_1243D0(void *, float, float);
extern void func_122F68(float *, void *, void *);

void func_067B20(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_1243D0(buffer, a, b);
    func_122F68(v, buffer, record + 0xe58);
}
