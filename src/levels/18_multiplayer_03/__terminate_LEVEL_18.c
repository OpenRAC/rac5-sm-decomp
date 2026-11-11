extern void (*D_001BFFEC)(void);

void __terminate(void)
{
    D_001BFFEC();
}
