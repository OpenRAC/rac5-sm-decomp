extern void (*D_001F889C)(void);

void __terminate(void)
{
    D_001F889C();
}
