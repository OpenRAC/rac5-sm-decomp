void func_173898(int *object)
{
    char *child = *(char **)(*(char **)object + 0x58);
    int *word = (int *)(child + 0x218);
    int count;
    for (count = 15; count >= 0; count--)
        *word-- = 0;
    *(int *)(child + 0x21C) = 0;
}
