extern long long func_067940(void *object);
extern long long func_036B38(void *object);

void func_036A90(void *object, unsigned long long enable)
{
    char *base = object;
    unsigned long long bit = (enable & 1) << 8;
    long long result;
    int record;

    *(unsigned long long *)(base + 0x968) =
        (*(unsigned long long *)(base + 0x968) & 0xfffffffffffffeffULL) | bit;
    result = func_067940(object);
    if (result == 0) {
        result = func_036B38(object);
        if (result != 0) {
            record = *(int *)(base + 0x5c4);
            if (enable != 0) {
                *(unsigned short *)(record + 0x74) &= 0xfffe;
            } else {
                *(unsigned short *)(record + 0x74) |= 1;
            }
        } else {
            record = *(int *)(base + 0x59c);
            if (enable != 0) {
                *(unsigned short *)(record + 0x74) &= 0xffbf;
            } else {
                *(unsigned short *)(record + 0x74) |= 0x40;
            }
        }
    }
}
