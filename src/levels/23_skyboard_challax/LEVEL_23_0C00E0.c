extern int (*D_001D40CC)(void);
extern void (*D_001D40D0)(void);

void func_0C00E0(void)
{
    if (D_001D40CC() != 0)
        D_001D40D0();
}
