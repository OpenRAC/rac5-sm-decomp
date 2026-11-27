/* LEVEL_01:0x16F160 -- sets the object's fade to 255 and clears two flag bits on every linked body. */
void func_16F160(char *object)
{
    int *e;
    unsigned int i;

    *(float *)(object + 0x70) = 255.0f;
    *(unsigned char *)(object + 0x45) = 1;
    e = *(int **)(object + 0x58);
    for (i = 0; i < 12; i++) {
        if (e[0] != 0) {
            *(int *)(e[0] + 0x64) &= ~0x20;
            *(int *)(e[0] + 0x64) &= ~0x40;
        }
        e = (int *)((char *)e + 0x1C);
    }
}
