extern int func_19D318(void);
extern void func_19D068(char *);

void func_19CA58(char *record)
{
    if (func_19D318() == 0) {
        func_19D068(record);
        **(int **)(record + 0x54) = 0;
    }
}
