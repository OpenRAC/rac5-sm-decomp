extern void func_1264E0(void *, float, float);
extern void func_124E58(float *, void *, void *);

void func_068CF0(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_1264E0(buffer, a, b);
    func_124E58(v, buffer, record + 0xe58);
}
