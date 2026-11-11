/* LEVEL_04:0x1A4D00 -- switches the object's attached record on (sets bit 0 of the linked byte and restarts the timer record) or off (clears the bit, stops the record and flags the object). */
extern int D_00222014;
extern void func_09A5A0(char *record, int value, int mode);
extern void func_09A718(char *record);

void func_1A4D00(char *obj, int on)
{
    char *link;
    char *data;
    char *target;

    link = *(char **)(obj + 0x54);
    data = *(char **)(obj + 0x58);
    if (on != 0) {
        target = *(char **)link;
        if (target != 0) {
            *(unsigned char *)(target + 0x53) |= 1;
        }
        func_09A5A0(data + 8, D_00222014, 0);
        *(int *)(data + 0x1C) = 0;
    } else {
        target = *(char **)link;
        if (target != 0) {
            *(unsigned char *)(target + 0x53) &= 0xFE;
        }
        func_09A718(data + 8);
        *(unsigned int *)(obj + 0x64) |= 0x20;
    }
}
