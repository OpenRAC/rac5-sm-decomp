extern int D_0021B364;
extern int D_0021B368;

int func_136A10(int a0, int a1, int a2, int a3, int a4)
{
    if (D_0021B368 == 0)
        return 0;
    if (a0 != D_0021B368)
        return 0;
    if (a1 == 0 || a2 == 0 || a3 == 0)
        goto fail;
    if (*(int *)D_0021B364 != 0)
        goto fail;
    if (*(int *)(D_0021B364 + 4) != 0)
        goto fail;
    *(int *)(D_0021B364 + 12) = a1;
    *(int *)(D_0021B364 + 8) = a2;
    *(int *)(D_0021B364 + 20) = a3;
    *(int *)(D_0021B364 + 16) = a4;
    return 1;
fail:
    return 0;
}
