/* LEVEL_01:0x19D4F8 -- runs the state check on the object, kicks the follow-up on state 1 and flags the object. */
extern int func_03B120(void *a, void *b);
extern void func_19DC18(void);

int func_19D4F8(char *object)
{
    int result = func_03B120(object, 0);

    if (result == 1)
        func_19DC18();
    *(unsigned int *)(object + 0x64) |= 0x4000000;
    return result;
}
