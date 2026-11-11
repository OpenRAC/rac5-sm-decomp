extern char *D_001D9574;
extern void SND_StopATRACInstance__FP13ATRACInstance(void *);

void func_16DB58(void)
{
    char *instance = D_001D9574;
    if (instance != 0) {
        int *state = *(int **)(instance + 0x58);
        if (*state != 0) {
            SND_StopATRACInstance__FP13ATRACInstance((void *)*state);
            *state = 0;
        }
        D_001D9574 = 0;
    }
}
