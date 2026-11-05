extern void SND_StopPositionalSound__FP14SND_Positionalb(void *, int);

void func_1C1590(char *record)
{
    char *sound = *(char **)(record + 0x2c);
    if (sound != 0) {
        *(int *)(sound + 0x10) = 0;
        SND_StopPositionalSound__FP14SND_Positionalb(*(void **)(record + 0x2c), 1);
    }
}
