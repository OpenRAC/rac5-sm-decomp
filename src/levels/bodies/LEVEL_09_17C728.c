extern char *D_001F22FC;
extern void SND_FadeATRACInstance__FP13ATRACInstanceff(void *, float, float);

void func_17C728(void)
{
    if (D_001F22FC != 0) {
        int *handle = *(int **)(D_001F22FC + 0x58);
        if (*handle != 0) {
            SND_FadeATRACInstance__FP13ATRACInstanceff((void *)*handle, 5.0f, 0.0f);
            *handle = 0;
        }
        D_001F22FC = 0;
    }
}
