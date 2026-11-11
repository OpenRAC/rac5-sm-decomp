extern void func_11C9F0(void *, float, float);
extern void func_11B368(float *, void *, void *);

void func_065AB0(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_11C9F0(buffer, a, b);
    func_11B368(v, buffer, record + 0xe58);
}
