extern char *D_002114F4;
extern void SND_StopATRACInstance__FP13ATRACInstance(void *);

void func_190618(void)
{
    char *instance = D_002114F4;
    if (instance != 0) {
        int *state = *(int **)(instance + 0x58);
        if (*state != 0) {
            SND_StopATRACInstance__FP13ATRACInstance((void *)*state);
            *state = 0;
        }
        D_002114F4 = 0;
    }
}
