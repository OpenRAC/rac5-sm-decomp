extern int D_0024FF24;
extern int D_0024FF28;

int func_144F48(int a0, int a1, int a2, int a3, int a4)
{
    if (D_0024FF28 == 0)
        return 0;
    if (a0 != D_0024FF28)
        return 0;
    if (a1 == 0 || a2 == 0 || a3 == 0)
        goto fail;
    if (*(int *)D_0024FF24 != 0)
        goto fail;
    if (*(int *)(D_0024FF24 + 4) != 0)
        goto fail;
    *(int *)(D_0024FF24 + 12) = a1;
    *(int *)(D_0024FF24 + 8) = a2;
    *(int *)(D_0024FF24 + 20) = a3;
    *(int *)(D_0024FF24 + 16) = a4;
    return 1;
fail:
    return 0;
}
