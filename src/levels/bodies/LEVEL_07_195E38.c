extern char *D_0021CE1C;
extern void SND_StopATRACInstance__FP13ATRACInstance(void *);

void func_195E38(void)
{
    char *instance = D_0021CE1C;
    if (instance != 0) {
        int *state = *(int **)(instance + 0x58);
        if (*state != 0) {
            SND_StopATRACInstance__FP13ATRACInstance((void *)*state);
            *state = 0;
        }
        D_0021CE1C = 0;
    }
}
