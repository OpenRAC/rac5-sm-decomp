extern void (*D_00200CD0)(void);
extern void (*D_00200CCC)(void);
extern void func_0C92E0(void);
extern void func_0C92E8(void);
void func_0C9308(void (*first)(void), void (*second)(void))
{
    D_00200CCC = first;
    D_00200CD0 = second;
    if (first == 0)
        D_00200CCC = func_0C92E0;
    if (second == 0)
        D_00200CD0 = func_0C92E8;
}
