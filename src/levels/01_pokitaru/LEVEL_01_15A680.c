extern int func_07CAB8(void *, int);
extern void func_15C260(char *, unsigned char, int);

void func_15A680(char *record)
{
    if (func_07CAB8(record, 0) != 0)
        func_15C260(record, record[0x45], 8);
}
