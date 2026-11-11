/* LEVEL_17:0x10F3D0 -- placement copy of FRONTEND_020B40.c. */
extern int D_001A815C;
extern int MEMCARD_SetMultiplayerSave__Fb(int);

int func_10F3D0(int a)
{
    int *p = (int *)D_001A815C;

    if (p == 0)
        return 0;
    p[48] = a;
    MEMCARD_SetMultiplayerSave__Fb(a == 1);
    return 1;
}
