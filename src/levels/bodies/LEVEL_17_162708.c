extern int func_162FC8(void);
extern void func_162D10(char *);

void func_162708(char *record)
{
    if (func_162FC8() == 0) {
        func_162D10(record);
        **(int **)(record + 0x54) = 0;
    }
}
