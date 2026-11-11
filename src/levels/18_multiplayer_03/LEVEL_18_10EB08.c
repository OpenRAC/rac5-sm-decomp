/* LEVEL_18:0x10EB08 -- placement copy of FRONTEND_020B40.c. */
extern int D_001B5FDC;
extern int MEMCARD_SetMultiplayerSave__Fb(int);

int func_10EB08(int a)
{
    int *p = (int *)D_001B5FDC;

    if (p == 0)
        return 0;
    p[48] = a;
    MEMCARD_SetMultiplayerSave__Fb(a == 1);
    return 1;
}
