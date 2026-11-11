extern char *D_001668A4;
extern void func_12FE00(char *, unsigned char, int);

void func_130A30(char *record)
{
    if (record == 0) record = D_001668A4;
    if (record != 0) func_12FE00(record, record[0x45], 5);
}
