extern int func_0901A8(int mask);
extern unsigned int func_08FFD8(int);
extern char *D_0023F11C;

unsigned int func_090070(int value)
{
    if (func_0901A8(value) == 0) {
        return 0;
    }
    return func_08FFD8(value) |
           *(unsigned int *)(D_0023F11C + 500);
}
