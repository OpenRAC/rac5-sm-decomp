extern int D_00032814;
extern int MEMCARD_SetMultiplayerSave__Fb(int);

int func_020B40(int a)
{
    int *p = (int *)D_00032814;

    if (p == 0)
        return 0;
    p[48] = a;
    MEMCARD_SetMultiplayerSave__Fb(a == 1);
    return 1;
}
