extern int (*D_001AFECC)(void);
extern void (*D_001AFED0)(void);

void func_0B8060(void)
{
    if (D_001AFECC() != 0)
        D_001AFED0();
}
