extern void (*D_001F895C)(void);

void __terminate(void)
{
    D_001F895C();
}
