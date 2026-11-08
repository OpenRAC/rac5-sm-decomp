extern int func_080300(void);
extern void func_08E818(void *);
extern void func_08E998(int, void *, void *, void *, void *);

void func_08EA20(void *arg0, void *arg1, void *arg2, void *arg3)
{
    if (func_080300())
        func_08E818(0);
    else
        func_08E998(0, arg0, arg1, arg2, arg3);
}
