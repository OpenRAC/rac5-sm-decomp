extern void *func_0672F8(void);
extern unsigned int func_067138(long long);
extern char *D_0010696C;

unsigned int func_067228(long long value)
{
    if (func_0672F8() == 0) {
        return 0;
    }
    return func_067138(value) |
           *(unsigned int *)(D_0010696C + 500);
}
