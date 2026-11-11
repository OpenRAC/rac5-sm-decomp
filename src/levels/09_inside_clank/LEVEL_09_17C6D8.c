extern char *D_001F22FC;
extern void SND_StopATRACInstance__FP13ATRACInstance(void *);

void func_17C6D8(void)
{
    char *instance = D_001F22FC;
    if (instance != 0) {
        int *state = *(int **)(instance + 0x58);
        if (*state != 0) {
            SND_StopATRACInstance__FP13ATRACInstance((void *)*state);
            *state = 0;
        }
        D_001F22FC = 0;
    }
}
