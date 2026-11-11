extern void (*D_001AFED0)(void);
extern void (*D_001AFECC)(void);
extern void func_0B8000(void);
extern void func_0B8008(void);
void func_0B8028(void (*first)(void), void (*second)(void))
{
    D_001AFECC = first;
    D_001AFED0 = second;
    if (first == 0)
        D_001AFECC = func_0B8000;
    if (second == 0)
        D_001AFED0 = func_0B8008;
}
