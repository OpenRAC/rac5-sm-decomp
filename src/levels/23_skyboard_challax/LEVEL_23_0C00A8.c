extern void (*D_001D40D0)(void);
extern void (*D_001D40CC)(void);
extern void func_0C0080(void);
extern void func_0C0088(void);
void func_0C00A8(void (*first)(void), void (*second)(void))
{
    D_001D40CC = first;
    D_001D40D0 = second;
    if (first == 0)
        D_001D40CC = func_0C0080;
    if (second == 0)
        D_001D40D0 = func_0C0088;
}
