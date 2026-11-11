void func_17F998(char *object)
{
    if (object != 0) {
        char *middle = *(char **)(object + 0x58);
        char *target = *(char **)middle;
        if (target != 0 && *(short *)(target + 0x100) == 36)
            *(unsigned char *)(object + 0x46) = 3;
    }
}
