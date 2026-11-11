extern int D_001F60CC;
extern int MEMCARD_SetMultiplayerSave__Fb(int);

int func_12EAF8(int a)
{
    int *p = (int *)D_001F60CC;

    if (p == 0)
        return 0;
    p[48] = a;
    MEMCARD_SetMultiplayerSave__Fb(a == 1);
    return 1;
}
