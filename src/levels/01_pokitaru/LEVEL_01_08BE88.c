/* LEVEL_01:0x08BE88 -- placement copy of LEVEL_02_092730.c. */
void func_08BE88(char *record, int value)
{
    record[0] = value;
    *(int *)(record + 8) = 0;
    record[1] = 0;
    record[2] = 0;
    record[3] = 0;
    record[5] = -1;
    record[4] = -1;
}
