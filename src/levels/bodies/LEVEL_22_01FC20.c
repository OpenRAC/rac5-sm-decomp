/* LEVEL_22.REL:0x01FC20: find a matching slot and update its byte value. */
extern int func_01F940(int owner, int item, int index, int kind);
extern int func_01FAD0(int owner, int item, int kind);
extern int func_01F460(int owner, int kind);

int func_01FC20(int owner, int item, int value, int kind)
{
    unsigned int index;
    int base;
    for (index = 0; index < 3; index++) {
        if (func_01F940(owner, item, index, kind)) {
            if (func_01FAD0(owner, item, kind))
                return 0;
            base = func_01F460(owner, kind);
            *(unsigned char *)(base + index + 0x4F) = value;
            return 1;
        }
    }
    return 0;
}

