extern void func_1240F0(void *a0, float a1, float a2, float a3);

void func_080D80(char *a0, void *b)
{
    func_1240F0(b, *(float *)(a0 + 0x30), *(float *)(a0 + 0x34),
                *(float *)(a0 + 0x38));
}
