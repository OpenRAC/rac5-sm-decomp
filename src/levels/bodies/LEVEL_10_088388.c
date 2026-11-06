extern void *func_088418(void);
extern unsigned int func_0882F0(long long);
extern char *D_001FF25C;

unsigned int func_088388(long long value)
{
    if (func_088418() == 0) {
        return 0;
    }
    return func_0882F0(value) |
           *(unsigned int *)(D_001FF25C + 500);
}
