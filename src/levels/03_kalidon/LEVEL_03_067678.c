extern void func_1246C8(void *, float, float);
extern void func_123040(float *, void *, void *);

void func_067678(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_1246C8(buffer, a, b);
    func_123040(v, buffer, record + 0xe58);
}
