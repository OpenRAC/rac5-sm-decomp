extern int func_1EC508(void);
extern void func_1EE3B8(void *, int);

void func_1EC7C0(char *record)
{
    if (func_1EC508() == 0) {
        *(int *)(record + 0x70) = 0;
        func_1EE3B8(record, 0x20);
    }
}
