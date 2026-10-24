extern void func_09BE08(int a0, void *a1, float f);
extern int func_09FC00(void);
int func_0A0BA8(void)
{
    char first[16];
    char second[16];
    func_09BE08(0x6C, first, 0.0f);
    if (func_09FC00()) {
        func_09BE08(0x6B, second, 0.0f);
        return *(int *)(second + 0xC) - *(int *)(first + 0xC);
    }
    return 0;
}
