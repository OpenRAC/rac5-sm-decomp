/* LEVEL_01.REL:0x024DE8: find a matching slot and update its byte value. */
extern int func_024B08(int owner, int item, int index, int kind);
extern int func_024C98(int owner, int item, int kind);
extern int func_024628(int owner, int kind);

int func_024DE8(int owner, int item, int value, int kind)
{
    unsigned int index;
    int base;
    for (index = 0; index < 3; index++) {
        if (func_024B08(owner, item, index, kind)) {
            if (func_024C98(owner, item, kind))
                return 0;
            base = func_024628(owner, kind);
            *(unsigned char *)(base + index + 0x4F) = value;
            return 1;
        }
    }
    return 0;
}

