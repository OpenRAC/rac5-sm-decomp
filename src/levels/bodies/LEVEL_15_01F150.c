/* LEVEL_15.REL:0x01F150: find a matching slot and update its byte value. */
extern int func_01EE70(int owner, int item, int index, int kind);
extern int func_01F000(int owner, int item, int kind);
extern int func_01E990(int owner, int kind);

int func_01F150(int owner, int item, int value, int kind)
{
    unsigned int index;
    int base;
    for (index = 0; index < 3; index++) {
        if (func_01EE70(owner, item, index, kind)) {
            if (func_01F000(owner, item, kind))
                return 0;
            base = func_01E990(owner, kind);
            *(unsigned char *)(base + index + 0x4F) = value;
            return 1;
        }
    }
    return 0;
}

