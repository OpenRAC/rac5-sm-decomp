extern void func_01A8B0(void *a0);
extern void func_01A8F0(void *a0);
extern void func_01A980(void *a0, float a1);
extern void func_01A9B0(int a0);
extern void func_01A9C0(float a0);
extern void func_01A9D0(void *a0);

void func_1CA0B8(char *a0)
{
    int *s1 = *(int **)(a0 + 0x54);

    func_01A8B0(a0 + 0x30);
    func_01A8F0(a0);
    func_01A980(a0 + 0x20, *(float *)((char *)s1 + 0x20));
    func_01A9B0(1);
    func_01A9C0(0.75f);
    func_01A9D0(a0);
}
