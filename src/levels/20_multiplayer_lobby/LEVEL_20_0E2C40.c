/* LEVEL_20:0x0E2C40 -- placement copy of FRONTEND_020B40.c. */
extern int D_0011721C;
extern int MEMCARD_SetMultiplayerSave__Fb(int);

int func_0E2C40(int a)
{
    int *p = (int *)D_0011721C;

    if (p == 0)
        return 0;
    p[48] = a;
    MEMCARD_SetMultiplayerSave__Fb(a == 1);
    return 1;
}
