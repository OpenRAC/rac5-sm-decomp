void func_078330(char *object, int enabled, int mode, int value)
{
    object[0x24] = enabled;
    if (enabled != 0) {
        if (mode != *(int *)(object + 0x14)) {
            *(int *)(object + 0x18) = value;
            *(int *)(object + 0x0C) = 1;
            *(int *)(object + 0x14) = mode;
            *(int *)(object + 0x10) = 0;
        }
    } else {
        *(int *)(object + 0x0C) = 0;
        *(int *)(object + 0x10) = 0;
        *(int *)(object + 0x14) = 0;
        *(int *)(object + 0x18) = 0;
    }
}
