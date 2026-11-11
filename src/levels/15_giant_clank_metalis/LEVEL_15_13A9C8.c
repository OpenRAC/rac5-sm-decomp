extern char *D_0015E204;
extern void SND_StopATRACInstance__FP13ATRACInstance(void *);

void func_13A9C8(void)
{
    char *instance = D_0015E204;
    if (instance != 0) {
        int *state = *(int **)(instance + 0x58);
        if (*state != 0) {
            SND_StopATRACInstance__FP13ATRACInstance((void *)*state);
            *state = 0;
        }
        D_0015E204 = 0;
    }
}
