/* LEVEL_05:0x0537A0 -- placement copy of LEVEL_01_055BC8.c: calls func_022B08 when the record is armed, flagged and func_022AD0 reports 2. */
extern int func_022AD0(char *record);
extern unsigned char func_022B08(char *object);

void func_0537A0(char *record)
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
    if ((should_call & 0xFF) != 0 && func_022AD0(record) == 2)
        func_022B08(record);
}
