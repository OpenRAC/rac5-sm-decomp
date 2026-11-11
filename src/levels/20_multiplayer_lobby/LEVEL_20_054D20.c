extern void func_0DCE68(void *, float, float);
extern void func_0DC138(float *, void *, void *);

void func_054D20(char *record, float *v, float a, float b)
{
    unsigned char buffer[48];
    func_0DCE68(buffer, a, b);
    func_0DC138(v, buffer, record + 0xe58);
}
