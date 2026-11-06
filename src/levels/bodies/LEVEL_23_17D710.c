extern char *D_001DBE24;
extern void func_17CAE0(char *, unsigned char, int);

void func_17D710(char *record)
{
    if (record == 0) record = D_001DBE24;
    if (record != 0) func_17CAE0(record, record[0x45], 5);
}
