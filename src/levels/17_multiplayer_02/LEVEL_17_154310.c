extern char *D_001B126C;
extern void SND_StopATRACInstance__FP13ATRACInstance(void *);

void func_154310(void)
{
    char *instance = D_001B126C;
    if (instance != 0) {
        int *state = *(int **)(instance + 0x58);
        if (*state != 0) {
            SND_StopATRACInstance__FP13ATRACInstance((void *)*state);
            *state = 0;
        }
        D_001B126C = 0;
    }
}
