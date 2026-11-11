extern int D_001F5C64;
extern int D_001F5C68;

int func_12A0E0(int a0, int a1, int a2, int a3, int a4)
{
    if (D_001F5C68 == 0)
        return 0;
    if (a0 != D_001F5C68)
        return 0;
    if (a1 == 0 || a2 == 0 || a3 == 0)
        goto fail;
    if (*(int *)D_001F5C64 != 0)
        goto fail;
    if (*(int *)(D_001F5C64 + 4) != 0)
        goto fail;
    *(int *)(D_001F5C64 + 12) = a1;
    *(int *)(D_001F5C64 + 8) = a2;
    *(int *)(D_001F5C64 + 20) = a3;
    *(int *)(D_001F5C64 + 16) = a4;
    return 1;
fail:
    return 0;
}
