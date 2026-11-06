extern void (*D_001EAAD0)(void);
extern void (*D_001EAACC)(void);
extern void func_0C6590(void);
extern void func_0C6598(void);
void func_0C65B8(void (*first)(void), void (*second)(void))
{
    D_001EAACC = first;
    D_001EAAD0 = second;
    if (first == 0)
        D_001EAACC = func_0C6590;
    if (second == 0)
        D_001EAAD0 = func_0C6598;
}
