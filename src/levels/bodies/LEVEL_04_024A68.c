/* LEVEL_04.REL:0x024A68: find a matching slot and update its byte value. */
extern int func_024788(int owner, int item, int index, int kind);
extern int func_024918(int owner, int item, int kind);
extern int func_0242A8(int owner, int kind);

int func_024A68(int owner, int item, int value, int kind)
{
    unsigned int index;
    int base;
    for (index = 0; index < 3; index++) {
        if (func_024788(owner, item, index, kind)) {
            if (func_024918(owner, item, kind))
                return 0;
            base = func_0242A8(owner, kind);
            *(unsigned char *)(base + index + 0x4F) = value;
            return 1;
        }
    }
    return 0;
}

