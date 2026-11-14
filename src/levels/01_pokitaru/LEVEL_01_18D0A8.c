/* LEVEL_01:0x18D0A8 -- releases the object's effect slot and stops its sound instance. */
extern void func_11A148(int index);
extern void SND_StopATRACInstance__FP13ATRACInstance(void *);

void func_18D0A8(char *object)
{
    int *state;

    state = *(int **)(object + 0x58);
    if (state[1] != 0) {
        func_11A148(state[1]);
    }
    if (state[0] != 0) {
        SND_StopATRACInstance__FP13ATRACInstance((void *)state[0]);
        state[0] = 0;
    }
}
