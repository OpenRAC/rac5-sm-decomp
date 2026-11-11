extern int D_001DA44C;
extern int MEMCARD_SetMultiplayerSave__Fb(int);

int func_1248F8(int a)
{
    int *p = (int *)D_001DA44C;

    if (p == 0)
        return 0;
    p[48] = a;
    MEMCARD_SetMultiplayerSave__Fb(a == 1);
    return 1;
}
