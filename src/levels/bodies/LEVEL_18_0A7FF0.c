extern int func_0A7F80(char *record, short left, short top, short right, short bottom, int value, int mode, int size);

int func_0A7FF0(char *record, short *fields, int value, int mode, int size)
{
    func_0A7F80(record, fields[0], fields[2], fields[4], fields[6], value, mode, size);
    return 1;
}
