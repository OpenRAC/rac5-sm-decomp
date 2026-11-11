extern int (*D_001AED4C)(void);
extern void (*D_001AED50)(void);

void func_0B8788(void)
{
    if (D_001AED4C() != 0)
        D_001AED50();
}
