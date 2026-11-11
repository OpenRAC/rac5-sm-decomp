extern void func_11F5A8(void *, float, float);
extern void func_11E140(float *, void *, void *);

void func_0658F0(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_11F5A8(buffer, a, b);
    func_11E140(v, buffer, record + 0xe58);
}
