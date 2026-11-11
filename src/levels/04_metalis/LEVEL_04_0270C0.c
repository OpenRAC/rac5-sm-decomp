extern char *D_0020D12C;
extern void func_0AC168(void);

int func_0270C0(int force)
{
    char *record = D_0020D12C;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_0AC168();
        return 1;
    }
    return 0;
}
