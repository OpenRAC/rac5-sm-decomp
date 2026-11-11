extern void (*D_00219350)(void);
extern void (*D_0021934C)(void);
extern void func_0C90C8(void);
extern void func_0C90D0(void);
void func_0C90F0(void (*first)(void), void (*second)(void))
{
    D_0021934C = first;
    D_00219350 = second;
    if (first == 0)
        D_0021934C = func_0C90C8;
    if (second == 0)
        D_00219350 = func_0C90D0;
}
