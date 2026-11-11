extern char *D_00221CEC;
extern void SND_FadeATRACInstance__FP13ATRACInstanceff(void *, float, float);

void func_1968F8(void)
{
    if (D_00221CEC != 0) {
        int *handle = *(int **)(D_00221CEC + 0x58);
        if (*handle != 0) {
            SND_FadeATRACInstance__FP13ATRACInstanceff((void *)*handle, 5.0f, 0.0f);
            *handle = 0;
        }
        D_00221CEC = 0;
    }
}
