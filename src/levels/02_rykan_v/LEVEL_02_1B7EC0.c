/* LEVEL_02:0x1B7EC0 -- placement copy of LEVEL_01_19D4F8.c: runs the state check on the object, kicks the follow-up on state 1 and flags the object. */
extern int func_03FBD0(void *a, void *b);
extern void func_1B85E0(void);

int func_1B7EC0(char *object)
{
    int result = func_03FBD0(object, 0);

    if (result == 1)
        func_1B85E0();
    *(unsigned int *)(object + 0x64) |= 0x4000000;
    return result;
}
