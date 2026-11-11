extern int D_001F0B4C;
extern int MEMCARD_SetMultiplayerSave__Fb(int);

int func_12C118(int a)
{
    int *p = (int *)D_001F0B4C;

    if (p == 0)
        return 0;
    p[48] = a;
    MEMCARD_SetMultiplayerSave__Fb(a == 1);
    return 1;
}
