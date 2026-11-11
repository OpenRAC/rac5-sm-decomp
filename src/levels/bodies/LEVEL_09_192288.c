extern int func_192B48(void *record);
extern void func_192898(char *);

void func_192288(char *record)
{
    if (func_192B48(record) == 0) {
        func_192898(record);
        **(int **)(record + 0x54) = 0;
    }
}
