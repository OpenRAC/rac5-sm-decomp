void func_06AF38(unsigned char *object)
{
    object[0x390] = 0;
    object[0x391] = 0;
    *(unsigned int *)(object + 0x380) = 0xFFFFu;
    *(unsigned int *)(object + 0x38C) = 0x34;
    *(unsigned int *)(object + 0x384) = 0xFFFFu;
    *(unsigned int *)(object + 0x388) = 0x34;
}
