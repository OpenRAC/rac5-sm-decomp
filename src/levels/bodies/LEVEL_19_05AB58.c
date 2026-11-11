extern void func_1051F0(void *, float, float);
extern void func_104310(float *, void *, void *);

void func_05AB58(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_1051F0(buffer, a, b);
    func_104310(v, buffer, record + 0xe58);
}
