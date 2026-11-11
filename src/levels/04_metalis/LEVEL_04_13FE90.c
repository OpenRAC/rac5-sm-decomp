extern int D_00220484;
extern int D_00220488;

int func_13FE90(int a0, int a1, int a2, int a3, int a4)
{
    if (D_00220488 == 0)
        return 0;
    if (a0 != D_00220488)
        return 0;
    if (a1 == 0 || a2 == 0 || a3 == 0)
        goto fail;
    if (*(int *)D_00220484 != 0)
        goto fail;
    if (*(int *)(D_00220484 + 4) != 0)
        goto fail;
    *(int *)(D_00220484 + 12) = a1;
    *(int *)(D_00220484 + 8) = a2;
    *(int *)(D_00220484 + 20) = a3;
    *(int *)(D_00220484 + 16) = a4;
    return 1;
fail:
    return 0;
}
