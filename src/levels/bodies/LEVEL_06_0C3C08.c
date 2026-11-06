extern void (*D_001EFBD0)(void);
extern void (*D_001EFBCC)(void);
extern void func_0C3BE0(void);
extern void func_0C3BE8(void);
void func_0C3C08(void (*first)(void), void (*second)(void))
{
    D_001EFBCC = first;
    D_001EFBD0 = second;
    if (first == 0)
        D_001EFBCC = func_0C3BE0;
    if (second == 0)
        D_001EFBD0 = func_0C3BE8;
}
