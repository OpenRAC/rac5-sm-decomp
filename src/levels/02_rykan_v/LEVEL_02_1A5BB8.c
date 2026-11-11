extern char *D_0021D63C;
extern void SND_StopATRACInstance__FP13ATRACInstance(void *);

void func_1A5BB8(void)
{
    char *instance = D_0021D63C;
    if (instance != 0) {
        int *state = *(int **)(instance + 0x58);
        if (*state != 0) {
            SND_StopATRACInstance__FP13ATRACInstance((void *)*state);
            *state = 0;
        }
        D_0021D63C = 0;
    }
}
