extern int (*D_001F004C)(void);
extern void (*D_001F0050)(void);

void func_0C78E8(void)
{
    if (D_001F004C() != 0)
        D_001F0050();
}
