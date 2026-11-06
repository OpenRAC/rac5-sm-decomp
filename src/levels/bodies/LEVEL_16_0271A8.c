extern int asyncCmdSync(int, void *, int *);

void func_0271A8(void *unused, void *result)
{
    int scratch[4];
    asyncCmdSync(0, result, scratch);
    *(int *)result = scratch[0];
}
