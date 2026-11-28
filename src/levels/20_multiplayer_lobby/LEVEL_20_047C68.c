/* LEVEL_20:0x047C68 -- placement copy of LEVEL_01_055BC8.c: calls func_01E340 when the record is armed, flagged and func_01E308 reports 2. */
extern int func_01E308(char *record);
extern unsigned char func_01E340(char *object);

void func_047C68(char *record)
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
    if ((should_call & 0xFF) != 0 && func_01E308(record) == 2)
        func_01E340(record);
}
