extern void *func_079688(void);
extern unsigned int func_0794C8(int);
extern char *D_001A428C;

unsigned int func_0795B8(int value)
{
    if (func_079688() == 0) {
        return 0;
    }
    return func_0794C8(value) |
           *(unsigned int *)(D_001A428C + 500);
}
