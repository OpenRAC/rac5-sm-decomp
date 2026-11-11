extern char D_0024C650[];
extern int func_024608(void *ptr);
extern int func_02ABB8(int value);
extern int func_068A30(void *ptr);
extern int func_08E778(void);

int func_02ABD8(void)
{
    int n;

    n = *(int *)(func_024608(D_0024C650) + 4);
    return func_02ABB8(7) == 0
        || n != 2
        || func_068A30(D_0024C650) != 0
        || func_08E778() == 0x100
        || func_08E778() == 0x80;
}
