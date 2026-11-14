/* LEVEL_07:0x173FC0 -- clears the first word of the object's state block and reports success. */
int func_173FC0(char *object)
{
    *(int *)(*(char **)(object + 0x58) + 0x30) = 0;
    return 1;
}
