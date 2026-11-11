extern char D_00235140[];
extern int func_023CA8(void *ptr);
extern int func_02A3F0(int value);
extern int func_0639B8(void *ptr);
extern int func_087E48(void);

int func_02A410(void)
{
    int n;

    n = *(int *)(func_023CA8(D_00235140) + 4);
    return func_02A3F0(7) == 0
        || n != 2
        || func_0639B8(D_00235140) != 0
        || func_087E48() == 0x100
        || func_087E48() == 0x80;
}
