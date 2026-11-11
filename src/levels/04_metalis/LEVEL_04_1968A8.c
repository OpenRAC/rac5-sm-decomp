extern char *D_00221CEC;
extern void SND_StopATRACInstance__FP13ATRACInstance(void *);

void func_1968A8(void)
{
    char *instance = D_00221CEC;
    if (instance != 0) {
        int *state = *(int **)(instance + 0x58);
        if (*state != 0) {
            SND_StopATRACInstance__FP13ATRACInstance((void *)*state);
            *state = 0;
        }
        D_00221CEC = 0;
    }
}
