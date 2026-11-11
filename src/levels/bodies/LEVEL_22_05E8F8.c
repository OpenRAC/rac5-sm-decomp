extern void func_0FE560(void *, float, float);
extern void func_0FD580(float *, void *, void *);

void func_05E8F8(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_0FE560(buffer, a, b);
    func_0FD580(v, buffer, record + 0xe58);
}
