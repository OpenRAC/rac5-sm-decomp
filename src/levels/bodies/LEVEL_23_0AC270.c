extern int func_09E0A0(void);
extern void func_0AC068(void *);
extern void func_0AC1E8(int, void *, void *, void *, void *);

void func_0AC270(void *arg0, void *arg1, void *arg2, void *arg3)
{
    if (func_09E0A0())
        func_0AC068(0);
    else
        func_0AC1E8(0, arg0, arg1, arg2, arg3);
}
