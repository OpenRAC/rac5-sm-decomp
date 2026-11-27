/* LEVEL_01:0x055BC8 -- calls func_023B70 when the record is armed, flagged and func_023B38 reports 2. */
extern int func_023B38(char *record);
extern unsigned char func_023B70(char *object);

void func_055BC8(char *record)
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
    if ((should_call & 0xFF) != 0 && func_023B38(record) == 2)
        func_023B70(record);
}
