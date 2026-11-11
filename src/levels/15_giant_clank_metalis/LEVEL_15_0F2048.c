extern int D_0015B9AC;
extern int MEMCARD_SetMultiplayerSave__Fb(int);

int func_0F2048(int a)
{
    int *p = (int *)D_0015B9AC;

    if (p == 0)
        return 0;
    p[48] = a;
    MEMCARD_SetMultiplayerSave__Fb(a == 1);
    return 1;
}
