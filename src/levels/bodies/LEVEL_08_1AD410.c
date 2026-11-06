extern char *D_00251A9C;
extern void SND_StopATRACInstance__FP13ATRACInstance(void *);

void func_1AD410(void)
{
    char *instance = D_00251A9C;
    if (instance != 0) {
        int *state = *(int **)(instance + 0x58);
        if (*state != 0) {
            SND_StopATRACInstance__FP13ATRACInstance((void *)*state);
            *state = 0;
        }
        D_00251A9C = 0;
    }
}
