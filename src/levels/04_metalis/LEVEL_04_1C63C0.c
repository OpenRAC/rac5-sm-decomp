extern char D_00222578[];
extern void func_074828(int, void *);

void func_1C63C0(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_074828(value, D_00222578);
        *(int *)(nested + 0x58) = 0;
    }
}
