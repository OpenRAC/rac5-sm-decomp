extern char *D_001DBB1C;
extern void SND_FadeATRACInstance__FP13ATRACInstanceff(void *, float, float);

void func_173A60(void)
{
    if (D_001DBB1C != 0) {
        int *handle = *(int **)(D_001DBB1C + 0x58);
        if (*handle != 0) {
            SND_FadeATRACInstance__FP13ATRACInstanceff((void *)*handle, 5.0f, 0.0f);
            *handle = 0;
        }
        D_001DBB1C = 0;
    }
}
