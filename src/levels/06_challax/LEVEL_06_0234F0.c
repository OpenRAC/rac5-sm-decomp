/* LEVEL_06.REL:0x0234F0: find a matching slot and update its byte value. */
extern int func_023210(int owner, int item, int index, int kind);
extern int func_0233A0(int owner, int item, int kind);
extern int func_022D30(int owner, int kind);

int func_0234F0(int owner, int item, int value, int kind)
{
    unsigned int index;
    int base;
    for (index = 0; index < 3; index++) {
        if (func_023210(owner, item, index, kind)) {
            if (func_0233A0(owner, item, kind))
                return 0;
            base = func_022D30(owner, kind);
            *(unsigned char *)(base + index + 0x4F) = value;
            return 1;
        }
    }
    return 0;
}

