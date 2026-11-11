extern void (*D_001B01D0)(void);
extern void (*D_001B01CC)(void);
extern void func_0B7700(void);
extern void func_0B7708(void);
void func_0B7728(void (*first)(void), void (*second)(void))
{
    D_001B01CC = first;
    D_001B01D0 = second;
    if (first == 0)
        D_001B01CC = func_0B7700;
    if (second == 0)
        D_001B01D0 = func_0B7708;
}
