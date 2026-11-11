extern char *D_001DBB1C;
extern void SND_StopATRACInstance__FP13ATRACInstance(void *);

void func_173A10(void)
{
    char *instance = D_001DBB1C;
    if (instance != 0) {
        int *state = *(int **)(instance + 0x58);
        if (*state != 0) {
            SND_StopATRACInstance__FP13ATRACInstance((void *)*state);
            *state = 0;
        }
        D_001DBB1C = 0;
    }
}
