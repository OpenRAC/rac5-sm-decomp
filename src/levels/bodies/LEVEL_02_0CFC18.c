extern void (*D_00215C90)(void);
extern void (*D_00215C8C)(void);
extern void func_0CFBF0(void);
extern void func_0CFBF8(void);
void func_0CFC18(void (*first)(void), void (*second)(void))
{
    D_00215C8C = first;
    D_00215C90 = second;
    if (first == 0)
        D_00215C8C = func_0CFBF0;
    if (second == 0)
        D_00215C90 = func_0CFBF8;
}
