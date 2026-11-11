extern void (*D_001AED50)(void);
extern void (*D_001AED4C)(void);
extern void func_0B8728(void);
extern void func_0B8730(void);
void func_0B8750(void (*first)(void), void (*second)(void))
{
    D_001AED4C = first;
    D_001AED50 = second;
    if (first == 0)
        D_001AED4C = func_0B8728;
    if (second == 0)
        D_001AED50 = func_0B8730;
}
