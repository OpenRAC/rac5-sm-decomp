extern void (*D_00155950)(void);
extern void (*D_0015594C)(void);
extern void func_0A9928(void);
extern void func_0A9930(void);
void func_0A9950(void (*first)(void), void (*second)(void))
{
    D_0015594C = first;
    D_00155950 = second;
    if (first == 0)
        D_0015594C = func_0A9928;
    if (second == 0)
        D_00155950 = func_0A9930;
}
