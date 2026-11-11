extern char *D_00166724;
extern void SND_StopATRACInstance__FP13ATRACInstance(void *);

void func_12B1E8(void)
{
    char *instance = D_00166724;
    if (instance != 0) {
        int *state = *(int **)(instance + 0x58);
        if (*state != 0) {
            SND_StopATRACInstance__FP13ATRACInstance((void *)*state);
            *state = 0;
        }
        D_00166724 = 0;
    }
}
