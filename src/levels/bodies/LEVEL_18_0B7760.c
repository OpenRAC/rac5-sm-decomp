extern int (*D_001B01CC)(void);
extern void (*D_001B01D0)(void);

void func_0B7760(void)
{
    if (D_001B01CC() != 0)
        D_001B01D0();
}
