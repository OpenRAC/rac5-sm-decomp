extern void (*D_00249B90)(void);
extern void (*D_00249B8C)(void);
extern void func_0D4208(void);
extern void func_0D4210(void);
void func_0D4230(void (*first)(void), void (*second)(void))
{
    D_00249B8C = first;
    D_00249B90 = second;
    if (first == 0)
        D_00249B8C = func_0D4208;
    if (second == 0)
        D_00249B90 = func_0D4210;
}
