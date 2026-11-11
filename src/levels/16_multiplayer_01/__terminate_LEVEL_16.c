extern void (*D_001BEA2C)(void);

void __terminate(void)
{
    D_001BEA2C();
}
