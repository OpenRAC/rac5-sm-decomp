extern void (*D_001A2350)(void);
extern void (*D_001A234C)(void);
extern void func_0B7C68(void);
extern void func_0B7C70(void);
void func_0B7C90(void (*first)(void), void (*second)(void))
{
    D_001A234C = first;
    D_001A2350 = second;
    if (first == 0)
        D_001A234C = func_0B7C68;
    if (second == 0)
        D_001A2350 = func_0B7C70;
}
