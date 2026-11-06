extern int func_111E10(void *, char *);

void func_164E38(char *record)
{
    int *result = *(int **)(record + 0x58);
    char scratch[16];
    *result = func_111E10(record + 0x30, scratch);
}
