extern char D_002025C0[];
extern int func_021E50(void *ptr);
extern int func_027F60(int value);
extern int func_05D170(void *ptr);
extern int func_07DD08(void);

int func_027F80(void)
{
    int n;

    n = *(int *)(func_021E50(D_002025C0) + 4);
    return func_027F60(7) == 0
        || n != 2
        || func_05D170(D_002025C0) != 0
        || func_07DD08() == 0x100
        || func_07DD08() == 0x80;
}
