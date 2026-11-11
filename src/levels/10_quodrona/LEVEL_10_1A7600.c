/* LEVEL_10:0x1A7600 -- placement copy of LEVEL_01_19D4F8.c: runs the state check on the object, kicks the follow-up on state 1 and flags the object. */
extern int func_0398D8(void *a, void *b);
extern void func_1A7D20(void);

int func_1A7600(char *object)
{
    int result = func_0398D8(object, 0);

    if (result == 1)
        func_1A7D20();
    *(unsigned int *)(object + 0x64) |= 0x4000000;
    return result;
}
