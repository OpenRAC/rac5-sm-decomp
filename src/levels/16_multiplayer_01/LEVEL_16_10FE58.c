/* LEVEL_16:0x10FE58 -- placement copy of FRONTEND_020B40.c. */
extern int D_001B4B5C;
extern int MEMCARD_SetMultiplayerSave__Fb(int);

int func_10FE58(int a)
{
    int *p = (int *)D_001B4B5C;

    if (p == 0)
        return 0;
    p[48] = a;
    MEMCARD_SetMultiplayerSave__Fb(a == 1);
    return 1;
}
