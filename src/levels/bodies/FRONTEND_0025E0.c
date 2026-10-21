int asyncCmdSync(void *, void *, void *);

int func_0025E0(void *unused, void *out)
{
    int local;
    int ret = asyncCmdSync((void *)0, out, &local);

    *(int *)out = local;
    return (ret ^ 1) != 0;
}
