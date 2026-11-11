/* LEVEL_04:0x1A90A8 -- placement copy of LEVEL_01_19D4F8.c: runs the state check on the object, kicks the follow-up on state 1 and flags the object. */
extern int func_03C768(void *a, void *b);
extern void func_1A97C8(void);

int func_1A90A8(char *object)
{
    int result = func_03C768(object, 0);

    if (result == 1)
        func_1A97C8();
    *(unsigned int *)(object + 0x64) |= 0x4000000;
    return result;
}
