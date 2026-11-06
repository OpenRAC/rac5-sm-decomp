extern int func_112898(void *, char *);

void func_16E698(char *record)
{
    int *result = *(int **)(record + 0x58);
    char scratch[16];
    *result = func_112898(record + 0x30, scratch);
}
