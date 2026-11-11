extern int D_0022046C;
extern int MEMCARD_SetMultiplayerSave__Fb(int);

int func_13F600(int a)
{
    int *p = (int *)D_0022046C;

    if (p == 0)
        return 0;
    p[48] = a;
    MEMCARD_SetMultiplayerSave__Fb(a == 1);
    return 1;
}
