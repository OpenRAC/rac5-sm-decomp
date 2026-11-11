void func_023BA8(char *object)
{
    int previous = *(int *)(object + 0x9A0);
    if (previous != 0x10) {
        *(int *)(object + 0x9B4) = previous;
        *(int *)(object + 0x9C0) = 0x10;
    }
}
