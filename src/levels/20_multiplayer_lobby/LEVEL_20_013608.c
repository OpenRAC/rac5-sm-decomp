extern int func_01E490(char *, void *);
extern int func_01EF38(void *, unsigned int, void *);
extern void func_013508(char *, int);
int func_013608(char *context, int value, unsigned int key)
{
    int result;
    if (!func_01E490(context, (void *)value)) return 0;
    result = func_01EF38((void *)value, key, *(void **)(context + 248));
    if (result) func_013508(context, value);
    return result;
}
