extern void func_137770(void *, float, float);
extern void func_135F90(float *, void *, void *);

void func_06E538(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_137770(buffer, a, b);
    func_135F90(v, buffer, record + 0xe58);
}
