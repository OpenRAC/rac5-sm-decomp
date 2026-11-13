extern int func_021670(char *, void *);
extern int func_022238(void *, unsigned int, void *);
extern void func_0153A8(char *, int);
int func_0154A8(char *context, int value, unsigned int key)
{
    int result;
    if (!func_021670(context, (void *)value)) return 0;
    result = func_022238((void *)value, key, *(void **)(context + 248));
    if (result) func_0153A8(context, value);
    return result;
}
