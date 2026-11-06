extern void (*D_0021A190)(void);
extern void (*D_0021A18C)(void);
extern void func_0CEAF8(void);
extern void func_0CEB00(void);
void func_0CEB20(void (*first)(void), void (*second)(void))
{
    D_0021A18C = first;
    D_0021A190 = second;
    if (first == 0)
        D_0021A18C = func_0CEAF8;
    if (second == 0)
        D_0021A190 = func_0CEB00;
}
