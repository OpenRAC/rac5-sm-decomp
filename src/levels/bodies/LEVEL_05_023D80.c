/* LEVEL_05.REL:0x023D80: find a matching slot and update its byte value. */
extern int func_023AA0(int owner, int item, int index, int kind);
extern int func_023C30(int owner, int item, int kind);
extern int func_0235C0(int owner, int kind);

int func_023D80(int owner, int item, int value, int kind)
{
    unsigned int index;
    int base;
    for (index = 0; index < 3; index++) {
        if (func_023AA0(owner, item, index, kind)) {
            if (func_023C30(owner, item, kind))
                return 0;
            base = func_0235C0(owner, kind);
            *(unsigned char *)(base + index + 0x4F) = value;
            return 1;
        }
    }
    return 0;
}

