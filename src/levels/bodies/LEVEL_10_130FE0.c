extern int D_0020FCAC;
extern int MEMCARD_SetMultiplayerSave__Fb(int);

int func_130FE0(int a)
{
    int *p = (int *)D_0020FCAC;

    if (p == 0)
        return 0;
    p[48] = a;
    MEMCARD_SetMultiplayerSave__Fb(a == 1);
    return 1;
}
