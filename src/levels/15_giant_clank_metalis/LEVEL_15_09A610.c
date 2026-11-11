extern int func_09A5A0(char *record, short left, short top, short right, short bottom, int value, int mode, int size);

int func_09A610(char *record, short *fields, int value, int mode, int size)
{
    func_09A5A0(record, fields[0], fields[2], fields[4], fields[6], value, mode, size);
    return 1;
}
