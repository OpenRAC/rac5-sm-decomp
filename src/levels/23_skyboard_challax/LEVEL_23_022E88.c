/* LEVEL_23.REL:0x022E88: find a matching slot and update its byte value. */
extern int func_022BA8(int owner, int item, int index, int kind);
extern int func_022D38(int owner, int item, int kind);
extern int func_0226C8(int owner, int kind);

int func_022E88(int owner, int item, int value, int kind)
{
    unsigned int index;
    int base;
    for (index = 0; index < 3; index++) {
        if (func_022BA8(owner, item, index, kind)) {
            if (func_022D38(owner, item, kind))
                return 0;
            base = func_0226C8(owner, kind);
            *(unsigned char *)(base + index + 0x4F) = value;
            return 1;
        }
    }
    return 0;
}

