void func_1611C0(char *object, int first, int second, unsigned char state)
{
    char *child = *(char **)(object + 0x58);
    *(int *)(child + 0x64) = first;
    *(int *)(child + 0x68) = second;
    *(unsigned char *)(object + 0x47) = state;
}
