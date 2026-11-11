extern int func_198FC0(void *record);
extern void func_198D10(char *);

void func_198700(char *record)
{
    if (func_198FC0(record) == 0) {
        func_198D10(record);
        **(int **)(record + 0x54) = 0;
    }
}
