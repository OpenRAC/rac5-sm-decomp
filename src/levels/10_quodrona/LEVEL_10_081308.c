extern void (*D_001FF154)(int);
extern void func_027EA8(void);

void func_081308(int v)
{
    if (D_001FF154 != 0)
        D_001FF154(v);
    func_027EA8();
}
