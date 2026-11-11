extern void func_1033A8(void *, float, float);
extern void func_1024C8(float *, void *, void *);

void func_05A200(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_1033A8(buffer, a, b);
    func_1024C8(v, buffer, record + 0xe58);
}
