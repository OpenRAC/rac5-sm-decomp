extern char *D_0021CE1C;
extern void SND_FadeATRACInstance__FP13ATRACInstanceff(void *, float, float);

void func_195E88(void)
{
    if (D_0021CE1C != 0) {
        int *handle = *(int **)(D_0021CE1C + 0x58);
        if (*handle != 0) {
            SND_FadeATRACInstance__FP13ATRACInstanceff((void *)*handle, 5.0f, 0.0f);
            *handle = 0;
        }
        D_0021CE1C = 0;
    }
}
