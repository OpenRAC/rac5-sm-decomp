extern char *D_00220EC4;
extern void SND_FadeATRACInstance__FP13ATRACInstanceff(void *, float, float);

void func_189288(void)
{
    if (D_00220EC4 != 0) {
        int *handle = *(int **)(D_00220EC4 + 0x58);
        if (*handle != 0) {
            SND_FadeATRACInstance__FP13ATRACInstanceff((void *)*handle, 5.0f, 0.0f);
            *handle = 0;
        }
        D_00220EC4 = 0;
    }
}
