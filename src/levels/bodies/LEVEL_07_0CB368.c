extern void (*D_00214FD0)(void);
extern void (*D_00214FCC)(void);
extern void func_0CB340(void);
extern void func_0CB348(void);
void func_0CB368(void (*first)(void), void (*second)(void))
{
    D_00214FCC = first;
    D_00214FD0 = second;
    if (first == 0)
        D_00214FCC = func_0CB340;
    if (second == 0)
        D_00214FD0 = func_0CB348;
}
