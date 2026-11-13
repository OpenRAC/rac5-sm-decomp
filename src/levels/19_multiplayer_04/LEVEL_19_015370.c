extern int func_0212B0(char *, void *);
extern int func_021E78(void *, unsigned int, void *);
extern void func_015270(char *, int);
int func_015370(char *context, int value, unsigned int key)
{
    int result;
    if (!func_0212B0(context, (void *)value)) return 0;
    result = func_021E78((void *)value, key, *(void **)(context + 248));
    if (result) func_015270(context, value);
    return result;
}
