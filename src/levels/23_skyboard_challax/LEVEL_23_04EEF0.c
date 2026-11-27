/* LEVEL_23:0x04EEF0 -- placement copy of LEVEL_01_055BC8.c: calls func_021D18 when the record is armed, flagged and func_021CE0 reports 2. */
extern int func_021CE0(char *record);
extern unsigned char func_021D18(char *object);

void func_04EEF0(char *record)
{
    long long should_call;
    int t;

    if (*(int *)(record + 0x5A4) == 0)
        return;

    should_call = 0;
    if (*(unsigned char *)(record + 0x9CD) != 0) {
        t = *(int *)(record + 0x9A0) != 1;
        should_call = t;
    }
    if ((should_call & 0xFF) != 0 && func_021CE0(record) == 2)
        func_021D18(record);
}
