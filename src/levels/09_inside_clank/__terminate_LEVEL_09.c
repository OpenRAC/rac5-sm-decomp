extern void (*D_001F3664)(void);

void __terminate(void)
{
    D_001F3664();
}
