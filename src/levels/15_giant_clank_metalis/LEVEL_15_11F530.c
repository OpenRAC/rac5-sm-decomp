/* LEVEL_15:0x11F530 -- calls a helper with a sub-record and conditionally calls a second helper. */
extern void func_12B488(char *, int);
extern void func_115C28(int);

void func_11F530(char *first, char *second)
{
    int flag;
    func_12B488(first + 0x88, *(int *)(second + 0x68));
    flag = *(int *)(first + 0x4c);
    if (flag != 0) func_115C28(flag);
}
