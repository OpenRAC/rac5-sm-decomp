/* LEVEL_10.REL:0x024750: find a matching slot and update its byte value. */
extern int func_024470(int owner, int item, int index, int kind);
extern int func_024600(int owner, int item, int kind);
extern int func_023F90(int owner, int kind);

int func_024750(int owner, int item, int value, int kind)
{
    unsigned int index;
    int base;
    for (index = 0; index < 3; index++) {
        if (func_024470(owner, item, index, kind)) {
            if (func_024600(owner, item, kind))
                return 0;
            base = func_023F90(owner, kind);
            *(unsigned char *)(base + index + 0x4F) = value;
            return 1;
        }
    }
    return 0;
}

