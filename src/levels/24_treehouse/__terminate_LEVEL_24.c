extern void (*D_001DA82C)(void);

void __terminate(void)
{
    D_001DA82C();
}
