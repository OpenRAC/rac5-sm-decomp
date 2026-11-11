extern void (*D_00111430)(void);
extern void (*D_0011142C)(void);
extern void func_0A2C58(void);
extern void func_0A2C60(void);
void func_0A2C80(void (*first)(void), void (*second)(void))
{
    D_0011142C = first;
    D_00111430 = second;
    if (first == 0)
        D_0011142C = func_0A2C58;
    if (second == 0)
        D_00111430 = func_0A2C60;
}
