extern void (*D_00160050)(void);
extern void (*D_0016004C)(void);
extern void func_0B7790(void);
extern void func_0B7798(void);
void func_0B77B8(void (*first)(void), void (*second)(void))
{
    D_0016004C = first;
    D_00160050 = second;
    if (first == 0)
        D_0016004C = func_0B7790;
    if (second == 0)
        D_00160050 = func_0B7798;
}
