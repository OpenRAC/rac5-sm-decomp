extern void SND_StopPositionalSound__FP14SND_Positionalb(void *, int);

void func_080918(char *record)
{
    if (record != 0) {
        int **slot = (int **)(record + 0x10);
        if (*slot != 0) {
            **slot = 0;
            *slot = 0;
        }
    }
    SND_StopPositionalSound__FP14SND_Positionalb(record, 1);
}
