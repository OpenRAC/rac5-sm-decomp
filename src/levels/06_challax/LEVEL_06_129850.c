extern int D_001F5C4C;
extern int MEMCARD_SetMultiplayerSave__Fb(int);

int func_129850(int a)
{
    int *p = (int *)D_001F5C4C;

    if (p == 0)
        return 0;
    p[48] = a;
    MEMCARD_SetMultiplayerSave__Fb(a == 1);
    return 1;
}
