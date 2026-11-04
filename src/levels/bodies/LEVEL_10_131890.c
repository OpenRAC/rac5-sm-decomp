extern int D_0020FCC4;
extern int D_0020FCC8;

int func_131890(int a0, int a1, int a2, int a3, int a4)
{
    if (D_0020FCC8 == 0)
        return 0;
    if (a0 != D_0020FCC8)
        return 0;
    if (a1 == 0 || a2 == 0 || a3 == 0)
        goto fail;
    if (*(int *)D_0020FCC4 != 0)
        goto fail;
    if (*(int *)(D_0020FCC4 + 4) != 0)
        goto fail;
    *(int *)(D_0020FCC4 + 12) = a1;
    *(int *)(D_0020FCC4 + 8) = a2;
    *(int *)(D_0020FCC4 + 20) = a3;
    *(int *)(D_0020FCC4 + 16) = a4;
    return 1;
fail:
    return 0;
}
