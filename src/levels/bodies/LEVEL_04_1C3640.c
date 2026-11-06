extern int func_1C3388(void);
extern void func_1C5238(void *, int);

void func_1C3640(char *record)
{
    if (func_1C3388() == 0) {
        *(int *)(record + 0x70) = 0;
        func_1C5238(record, 0x20);
    }
}
