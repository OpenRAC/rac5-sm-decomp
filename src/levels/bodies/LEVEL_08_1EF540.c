extern char D_00252600[];
extern void func_078490(int, void *);

void func_1EF540(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_078490(value, D_00252600);
        *(int *)(nested + 0x58) = 0;
    }
}
