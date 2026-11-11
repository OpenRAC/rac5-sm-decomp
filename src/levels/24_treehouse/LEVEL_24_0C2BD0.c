extern void (*D_001D1950)(void);
extern void (*D_001D194C)(void);
extern void func_0C2BA8(void);
extern void func_0C2BB0(void);
void func_0C2BD0(void (*first)(void), void (*second)(void))
{
    D_001D194C = first;
    D_001D1950 = second;
    if (first == 0)
        D_001D194C = func_0C2BA8;
    if (second == 0)
        D_001D1950 = func_0C2BB0;
}
