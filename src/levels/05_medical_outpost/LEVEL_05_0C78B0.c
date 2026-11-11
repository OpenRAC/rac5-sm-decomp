extern void (*D_001F0050)(void);
extern void (*D_001F004C)(void);
extern void func_0C7888(void);
extern void func_0C7890(void);
void func_0C78B0(void (*first)(void), void (*second)(void))
{
    D_001F004C = first;
    D_001F0050 = second;
    if (first == 0)
        D_001F004C = func_0C7888;
    if (second == 0)
        D_001F0050 = func_0C7890;
}
