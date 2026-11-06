extern char D_00201040[];
extern int func_021A20(void *ptr);
extern int func_027930(int value);
extern int func_05D008(void *ptr);
extern int func_0810E8(void);

int func_027950(void)
{
    int n;

    n = *(int *)(func_021A20(D_00201040) + 4);
    return func_027930(7) == 0
        || n != 2
        || func_05D008(D_00201040) != 0
        || func_0810E8() == 0x100
        || func_0810E8() == 0x80;
}
