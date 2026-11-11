extern void (*D_00209CD0)(void);
extern void (*D_00209CCC)(void);
extern void func_0CA720(void);
extern void func_0CA728(void);
void func_0CA748(void (*first)(void), void (*second)(void))
{
    D_00209CCC = first;
    D_00209CD0 = second;
    if (first == 0)
        D_00209CCC = func_0CA720;
    if (second == 0)
        D_00209CD0 = func_0CA728;
}
