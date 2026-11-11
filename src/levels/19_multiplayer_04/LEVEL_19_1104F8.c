/* LEVEL_19:0x1104F8 -- placement copy of FRONTEND_020B40.c. */
extern int D_001B5CDC;
extern int MEMCARD_SetMultiplayerSave__Fb(int);

int func_1104F8(int a)
{
    int *p = (int *)D_001B5CDC;

    if (p == 0)
        return 0;
    p[48] = a;
    MEMCARD_SetMultiplayerSave__Fb(a == 1);
    return 1;
}
