extern char *D_00166724;
extern void SND_FadeATRACInstance__FP13ATRACInstanceff(void *, float, float);

void func_12B238(void)
{
    if (D_00166724 != 0) {
        int *handle = *(int **)(D_00166724 + 0x58);
        if (*handle != 0) {
            SND_FadeATRACInstance__FP13ATRACInstanceff((void *)*handle, 5.0f, 0.0f);
            *handle = 0;
        }
        D_00166724 = 0;
    }
}
