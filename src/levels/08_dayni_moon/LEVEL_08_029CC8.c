extern int asyncCmdSync(int, void *, int *);

int func_029CC8(void *unused, void *result)
{
    int scratch[4];
    int r;
    r = asyncCmdSync(0, result, scratch);
    *(int *)result = scratch[0];
    return r;
}
