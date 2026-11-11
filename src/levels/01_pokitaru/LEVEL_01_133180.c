extern int D_0020704C;
extern int MEMCARD_SetMultiplayerSave__Fb(int);

int func_133180(int a)
{
    int *p = (int *)D_0020704C;

    if (p == 0)
        return 0;
    p[48] = a;
    MEMCARD_SetMultiplayerSave__Fb(a == 1);
    return 1;
}
