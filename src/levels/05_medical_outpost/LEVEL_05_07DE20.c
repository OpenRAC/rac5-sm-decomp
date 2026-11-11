extern void func_07DE50(void *a0, void *a1);

void func_07DE20(void *a0, char *a1)
{
    func_07DE50(a0, a1);
    *(float *)(a1 + 0xC) = 1.0f;
}
