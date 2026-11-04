extern int D_0024FF0C;
extern int MEMCARD_SetMultiplayerSave__Fb(int);

int func_1446B8(int a)
{
    int *p = (int *)D_0024FF0C;

    if (p == 0)
        return 0;
    p[48] = a;
    MEMCARD_SetMultiplayerSave__Fb(a == 1);
    return 1;
}
