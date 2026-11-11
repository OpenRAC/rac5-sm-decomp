int func_0A6D90(void *, int);
void *func_0A6DE8(void *, int, void *);
int func_0A6EB8(void *, void *);

int sceGimPictureLoadFile__FP13SceGimPicturePCvii(void *a0, void *a1, int a2, void *a3)
{
    void *r;

    if (a0 == 0 || a1 == 0)
        return 0;
    if (a2 < 4)
        return 0;
    if (*(int *)a1 != 0x2E47494D)
        return 0;
    if (func_0A6D90(a1, a2) == 0)
        return 0;
    r = func_0A6DE8(a1, a2, a3);
    if (r == 0)
        return 0;
    return func_0A6EB8(a0, r);
}
