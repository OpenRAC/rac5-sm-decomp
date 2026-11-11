extern char *D_002114F4;
extern void SND_FadeATRACInstance__FP13ATRACInstanceff(void *, float, float);

void func_190668(void)
{
    if (D_002114F4 != 0) {
        int *handle = *(int **)(D_002114F4 + 0x58);
        if (*handle != 0) {
            SND_FadeATRACInstance__FP13ATRACInstanceff((void *)*handle, 5.0f, 0.0f);
            *handle = 0;
        }
        D_002114F4 = 0;
    }
}
