extern char *D_0015E204;
extern void SND_FadeATRACInstance__FP13ATRACInstanceff(void *, float, float);

void func_13AA18(void)
{
    if (D_0015E204 != 0) {
        int *handle = *(int **)(D_0015E204 + 0x58);
        if (*handle != 0) {
            SND_FadeATRACInstance__FP13ATRACInstanceff((void *)*handle, 5.0f, 0.0f);
            *handle = 0;
        }
        D_0015E204 = 0;
    }
}
