/* LEVEL_03:0x1B0600 -- placement copy of LEVEL_01_19D4F8.c: runs the state check on the object, kicks the follow-up on state 1 and flags the object. */
extern int func_039360(void *a, void *b);
extern void func_1B0D20(void);

int func_1B0600(char *object)
{
    int result = func_039360(object, 0);

    if (result == 1)
        func_1B0D20();
    *(unsigned int *)(object + 0x64) |= 0x4000000;
    return result;
}
