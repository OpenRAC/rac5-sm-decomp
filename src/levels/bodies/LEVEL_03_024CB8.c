/* LEVEL_03.REL:0x024CB8: find a matching slot and update its byte value. */
extern int func_0249D8(int owner, int item, int index, int kind);
extern int func_024B68(int owner, int item, int kind);
extern int func_0244F8(int owner, int kind);

int func_024CB8(int owner, int item, int value, int kind)
{
    unsigned int index;
    int base;
    for (index = 0; index < 3; index++) {
        if (func_0249D8(owner, item, index, kind)) {
            if (func_024B68(owner, item, kind))
                return 0;
            base = func_0244F8(owner, kind);
            *(unsigned char *)(base + index + 0x4F) = value;
            return 1;
        }
    }
    return 0;
}

