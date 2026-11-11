extern char D_001E4210[];
extern int func_021260(void *ptr);
extern int func_0279E0(int value);
extern int func_0557F8(void *ptr);
extern int func_079870(void);

int func_027A00(void)
{
    int n;

    n = *(int *)(func_021260(D_001E4210) + 4);
    return func_0279E0(7) == 0
        || n != 2
        || func_0557F8(D_001E4210) != 0
        || func_079870() == 0x100
        || func_079870() == 0x80;
}
