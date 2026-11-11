extern char D_001D5390[];
extern int func_020FA0(void *ptr);
extern int func_0277B8(int value);
extern int func_055DC8(void *ptr);
extern int func_079E00(void);

int func_0277D8(void)
{
    int n;

    n = *(int *)(func_020FA0(D_001D5390) + 4);
    return func_0277B8(7) == 0
        || n != 2
        || func_055DC8(D_001D5390) != 0
        || func_079E00() == 0x100
        || func_079E00() == 0x80;
}
