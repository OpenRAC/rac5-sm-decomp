extern char *D_00220EC4;
extern void SND_StopATRACInstance__FP13ATRACInstance(void *);

void func_189238(void)
{
    char *instance = D_00220EC4;
    if (instance != 0) {
        int *state = *(int **)(instance + 0x58);
        if (*state != 0) {
            SND_StopATRACInstance__FP13ATRACInstance((void *)*state);
            *state = 0;
        }
        D_00220EC4 = 0;
    }
}
