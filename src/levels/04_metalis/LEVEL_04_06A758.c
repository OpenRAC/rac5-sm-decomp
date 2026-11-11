extern void func_1326C0(void *, float, float);
extern void func_130CC0(float *, void *, void *);

void func_06A758(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_1326C0(buffer, a, b);
    func_130CC0(v, buffer, record + 0xe58);
}
