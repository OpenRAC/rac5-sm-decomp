/* LEVEL_02.REL:0x025748: find a matching slot and update its byte value. */
extern int func_025468(int owner, int item, int index, int kind);
extern int func_0255F8(int owner, int item, int kind);
extern int func_024F88(int owner, int kind);

int func_025748(int owner, int item, int value, int kind)
{
    unsigned int index;
    int base;
    for (index = 0; index < 3; index++) {
        if (func_025468(owner, item, index, kind)) {
            if (func_0255F8(owner, item, kind))
                return 0;
            base = func_024F88(owner, kind);
            *(unsigned char *)(base + index + 0x4F) = value;
            return 1;
        }
    }
    return 0;
}

