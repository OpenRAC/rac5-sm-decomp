extern void SND_StopPositionalSound__FP14SND_Positionalb(void *, int);

void func_12B488(int *slot, int id)
{
    if (*slot != 0) {
        SND_StopPositionalSound__FP14SND_Positionalb((void *)*slot, 1);
        *slot = 0;
    }
}
