extern void func_121F88(void *, float, float);
extern void func_120B20(float *, void *, void *);

void func_066958(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_121F88(buffer, a, b);
    func_120B20(v, buffer, record + 0xe58);
}
