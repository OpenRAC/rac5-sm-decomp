/* LEVEL_07.REL:0x0253B0: find a matching slot and update its byte value. */
extern int func_0250D0(int owner, int item, int index, int kind);
extern int func_025260(int owner, int item, int kind);
extern int func_024BF0(int owner, int kind);

int func_0253B0(int owner, int item, int value, int kind)
{
    unsigned int index;
    int base;
    for (index = 0; index < 3; index++) {
        if (func_0250D0(owner, item, index, kind)) {
            if (func_025260(owner, item, kind))
                return 0;
            base = func_024BF0(owner, kind);
            *(unsigned char *)(base + index + 0x4F) = value;
            return 1;
        }
    }
    return 0;
}

