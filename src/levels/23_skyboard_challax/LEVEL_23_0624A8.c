extern void func_117190(void *, float, float);
extern void func_115B08(float *, void *, void *);

void func_0624A8(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_117190(buffer, a, b);
    func_115B08(v, buffer, record + 0xe58);
}
