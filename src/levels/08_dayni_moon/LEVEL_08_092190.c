extern char *D_0028E2B4;
extern char D_0028CAB0[];
extern void func_027608(void *, int, int);

void func_092190(char *record)
{
    D_0028E2B4 = record;
    func_027608(D_0028CAB0, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
