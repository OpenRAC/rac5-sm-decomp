extern int D_0021C00C;
extern int MEMCARD_SetMultiplayerSave__Fb(int);

int func_139530(int a)
{
    int *p = (int *)D_0021C00C;

    if (p == 0)
        return 0;
    p[48] = a;
    MEMCARD_SetMultiplayerSave__Fb(a == 1);
    return 1;
}
