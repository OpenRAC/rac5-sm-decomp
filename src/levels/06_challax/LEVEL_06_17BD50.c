extern char *D_001F7404;
extern void SND_StopATRACInstance__FP13ATRACInstance(void *);

void func_17BD50(void)
{
    char *instance = D_001F7404;
    if (instance != 0) {
        int *state = *(int **)(instance + 0x58);
        if (*state != 0) {
            SND_StopATRACInstance__FP13ATRACInstance((void *)*state);
            *state = 0;
        }
        D_001F7404 = 0;
    }
}
