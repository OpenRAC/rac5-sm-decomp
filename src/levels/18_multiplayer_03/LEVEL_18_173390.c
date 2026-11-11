extern int func_111548(void *, char *);

void func_173390(char *record)
{
    int *result = *(int **)(record + 0x58);
    char scratch[16];
    *result = func_111548(record + 0x30, scratch);
}
