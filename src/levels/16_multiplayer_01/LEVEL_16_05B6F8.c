extern void func_104AE0(void *, float, float);
extern void func_103C00(float *, void *, void *);

void func_05B6F8(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_104AE0(buffer, a, b);
    func_103C00(v, buffer, record + 0xe58);
}
