extern int func_112F38(void *, char *);

void func_16F550(char *record)
{
    int *result = *(int **)(record + 0x58);
    char scratch[16];
    *result = func_112F38(record + 0x30, scratch);
}
