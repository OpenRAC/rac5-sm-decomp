extern int func_020FF0(char *, void *);
extern int func_021BB8(void *, unsigned int, void *);
extern void func_014ED0(char *, int);
int func_014FD0(char *context, int value, unsigned int key)
{
    int result;
    if (!func_020FF0(context, (void *)value)) return 0;
    result = func_021BB8((void *)value, key, *(void **)(context + 248));
    if (result) func_014ED0(context, value);
    return result;
}
