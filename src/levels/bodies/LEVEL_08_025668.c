/* LEVEL_08.REL:0x025668: find a matching slot and update its byte value. */
extern int func_025388(int owner, int item, int index, int kind);
extern int func_025518(int owner, int item, int kind);
extern int func_024EA8(int owner, int kind);

int func_025668(int owner, int item, int value, int kind)
{
    unsigned int index;
    int base;
    for (index = 0; index < 3; index++) {
        if (func_025388(owner, item, index, kind)) {
            if (func_025518(owner, item, kind))
                return 0;
            base = func_024EA8(owner, kind);
            *(unsigned char *)(base + index + 0x4F) = value;
            return 1;
        }
    }
    return 0;
}

