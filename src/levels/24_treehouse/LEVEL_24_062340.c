extern void func_11C078(void *, float, float);
extern void func_11AC10(float *, void *, void *);

void func_062340(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_11C078(buffer, a, b);
    func_11AC10(v, buffer, record + 0xe58);
}
