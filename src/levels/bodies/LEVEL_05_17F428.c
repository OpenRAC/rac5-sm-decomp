void func_17F428(char *object, unsigned int state)
{
    if (*(unsigned char *)(object + 0x45) != state) {
        if (state == 1) {
            *(unsigned char *)(object + 0x46) = 0;
            *(int *)(object + 0x70) = 0;
        } else if (state == 2) {
            *(unsigned char *)(object + 0x46) = 0;
            *(int *)(object + 0x70) = 0;
        }
        *(unsigned char *)(object + 0x45) = state;
    }
}
