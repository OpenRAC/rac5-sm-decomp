/* LEVEL_18:0x158CC0 -- placement copy of LEVEL_01_18D0A8.c: releases the object's effect slot and stops its sound instance. */
extern void func_0F9070(int index);
extern void SND_StopATRACInstance__FP13ATRACInstance(void *);

void func_158CC0(char *object)
{
    int *state;

    state = *(int **)(object + 0x58);
    if (state[1] != 0) {
        func_0F9070(state[1]);
    }
    if (state[0] != 0) {
        SND_StopATRACInstance__FP13ATRACInstance((void *)state[0]);
        state[0] = 0;
    }
}
