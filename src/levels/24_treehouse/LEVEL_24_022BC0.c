/* LEVEL_24.REL:0x022BC0: find a matching slot and update its byte value. */
extern int func_0228E0(int owner, int item, int index, int kind);
extern int func_022A70(int owner, int item, int kind);
extern int func_022400(int owner, int kind);

int func_022BC0(int owner, int item, int value, int kind)
{
    unsigned int index;
    int base;
    for (index = 0; index < 3; index++) {
        if (func_0228E0(owner, item, index, kind)) {
            if (func_022A70(owner, item, kind))
                return 0;
            base = func_022400(owner, kind);
            *(unsigned char *)(base + index + 0x4F) = value;
            return 1;
        }
    }
    return 0;
}

