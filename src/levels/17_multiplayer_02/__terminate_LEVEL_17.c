extern void (*D_001B1F04)(void);

void __terminate(void)
{
    D_001B1F04();
}
