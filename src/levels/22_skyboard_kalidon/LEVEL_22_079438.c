extern void *func_0794C8(void);
extern unsigned int func_0793A0(int);
extern char *D_001555DC;

unsigned int func_079438(int value)
{
    if (func_0794C8() == 0) {
        return 0;
    }
    return func_0793A0(value) |
           *(unsigned int *)(D_001555DC + 500);
}
