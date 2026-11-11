/* LEVEL_09:0x192D28 -- placement copy of LEVEL_01_19D4F8.c: runs the state check on the object, kicks the follow-up on state 1 and flags the object. */
extern int func_0376D0(void *a, void *b);
extern void func_193448(void);

int func_192D28(char *object)
{
    int result = func_0376D0(object, 0);

    if (result == 1)
        func_193448();
    *(unsigned int *)(object + 0x64) |= 0x4000000;
    return result;
}
