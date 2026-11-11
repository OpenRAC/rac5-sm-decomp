extern char *D_001BDC54;
extern void SND_FadeATRACInstance__FP13ATRACInstanceff(void *, float, float);

void func_15A5F0(void)
{
    if (D_001BDC54 != 0) {
        int *handle = *(int **)(D_001BDC54 + 0x58);
        if (*handle != 0) {
            SND_FadeATRACInstance__FP13ATRACInstanceff((void *)*handle, 5.0f, 0.0f);
            *handle = 0;
        }
        D_001BDC54 = 0;
    }
}
