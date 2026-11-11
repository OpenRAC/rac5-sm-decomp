extern int D_001A8174;
extern int D_001A8178;

int func_10FCF8(int a0, int a1, int a2, int a3, int a4)
{
    if (D_001A8178 == 0)
        return 0;
    if (a0 != D_001A8178)
        return 0;
    if (a1 == 0 || a2 == 0 || a3 == 0)
        goto fail;
    if (*(int *)D_001A8174 != 0)
        goto fail;
    if (*(int *)(D_001A8174 + 4) != 0)
        goto fail;
    *(int *)(D_001A8174 + 12) = a1;
    *(int *)(D_001A8174 + 8) = a2;
    *(int *)(D_001A8174 + 20) = a3;
    *(int *)(D_001A8174 + 16) = a4;
    return 1;
fail:
    return 0;
}
