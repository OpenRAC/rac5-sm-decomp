/* FRONTEND:0x002C80 -- queries the thread id and caches it in the global. */
extern int *D_0010BE50[];

int GetThreadId(void);

int func_002C80(void)
{
    if (D_0010BE50[0] == 0)
        return 0;
    if (D_0010BE50[0][0] == 3) {
        D_0010BE50[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
