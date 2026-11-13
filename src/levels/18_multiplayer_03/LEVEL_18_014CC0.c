extern int func_020CB8(char *, void *);
extern int func_021880(void *, unsigned int, void *);
extern void func_014BC0(char *, int);
int func_014CC0(char *context, int value, unsigned int key)
{
    int result;
    if (!func_020CB8(context, (void *)value)) return 0;
    result = func_021880((void *)value, key, *(void **)(context + 248));
    if (result) func_014BC0(context, value);
    return result;
}
