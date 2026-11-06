extern int func_192B48(void);
extern void func_192898(char *);

void func_192288(char *record)
{
    if (func_192B48() == 0) {
        func_192898(record);
        **(int **)(record + 0x54) = 0;
    }
}
