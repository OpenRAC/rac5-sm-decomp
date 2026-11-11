/* LEVEL_09.REL:0x0240E0: find a matching slot and update its byte value. */
extern int func_023E00(int owner, int item, int index, int kind);
extern int func_023F90(int owner, int item, int kind);
extern int func_023920(int owner, int kind);

int func_0240E0(int owner, int item, int value, int kind)
{
    unsigned int index;
    int base;
    for (index = 0; index < 3; index++) {
        if (func_023E00(owner, item, index, kind)) {
            if (func_023F90(owner, item, kind))
                return 0;
            base = func_023920(owner, kind);
            *(unsigned char *)(base + index + 0x4F) = value;
            return 1;
        }
    }
    return 0;
}

