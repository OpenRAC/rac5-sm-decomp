extern int func_191FB0(void);
extern void func_193E60(void *, int);

void func_192268(char *record)
{
    if (func_191FB0() == 0) {
        *(int *)(record + 0x70) = 0;
        func_193E60(record, 0x20);
    }
}
