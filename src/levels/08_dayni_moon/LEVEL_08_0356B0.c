void func_035350(void *a0, void *a1, float *a2, void *a3, void *a4);
void func_034FD0(void *a0, void *a1, void *a2, float f0, float f1);

void func_0356B0(void *a0, void *a1, void *a2, void *a3)
{
    float v[2];

    func_035350(a0, a1, v, a2, a3);
    func_034FD0(a0, a1, a2, v[0], v[1]);
}
