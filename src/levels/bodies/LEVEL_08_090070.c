extern void *func_0901A8(void);
extern unsigned int func_08FFD8(long long);
extern char *D_0023F11C;

unsigned int func_090070(long long value)
{
    if (func_0901A8() == 0) {
        return 0;
    }
    return func_08FFD8(value) |
           *(unsigned int *)(D_0023F11C + 500);
}
