/* LEVEL_24:0x16D970 -- placement copy of LEVEL_01_18D0A8.c: releases the object's effect slot and stops its sound instance. */
extern void func_1103B0(int index);
extern void SND_StopATRACInstance__FP13ATRACInstance(void *);

void func_16D970(char *object)
{
    int *state;

    state = *(int **)(object + 0x58);
    if (state[1] != 0) {
        func_1103B0(state[1]);
    }
    if (state[0] != 0) {
        SND_StopATRACInstance__FP13ATRACInstance((void *)state[0]);
        state[0] = 0;
    }
}
