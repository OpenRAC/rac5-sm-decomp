/* LEVEL_24:0x17BB98 -- placement copy of LEVEL_01_19D4F8.c: runs the state check on the object, kicks the follow-up on state 1 and flags the object. */
extern int func_034218(void *a, void *b);
extern void func_17C2B8(void);

int func_17BB98(char *object)
{
    int result = func_034218(object, 0);

    if (result == 1)
        func_17C2B8();
    *(unsigned int *)(object + 0x64) |= 0x4000000;
    return result;
}
