/* LEVEL_08:0x202F00 -- callback that forwards its first and fifth arguments to the matrix setup and reports success. */
extern void func_202600(char *matrix, char *info);

int func_202F00(char *a0, int a1, int a2, int a3, char *a4)
{
    func_202600(a0, a4);
    return 1;
}
