extern char D_001D9CF8[];
extern void func_06C288(int, void *);

void func_194FE8(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_06C288(value, D_001D9CF8);
        *(int *)(nested + 0x58) = 0;
    }
}
