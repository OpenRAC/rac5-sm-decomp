/* LEVEL_01.REL:0x1CD720: reviewed 176-byte candidate.
 * pinned C with gnu-ee-trial links 172 bytes; first differs at +4.
 * Retry: Recover the table declaration and evaluation order that preserve the
 * original call argument registers.
 * No matching credit.
 */
struct Obj {
    char bytes[0x68];
};

extern struct Obj D_0022F6F8[];
extern void func_095858(struct Obj *object, unsigned int index);
extern void func_1CCF50(void *object);

void func_1CD720(void *unused, char *state)
{
    unsigned short *tag;
    unsigned int tag_value;
    unsigned int table_index;
    struct Obj *record;
    char *object;

    tag = *(unsigned short **)(state + 0x58);
    table_index = ((unsigned char *)tag)[3];
    tag_value = *tag;
    record = &D_0022F6F8[table_index];
    if (tag_value != 0xffffu) {
        func_095858(record, tag_value);
        *tag = 0xffffu;
    }
    object = *(char **)(state + 0x68);
    if (object != 0 &&
        (((*(unsigned int *)(object + 0x64) & 0x2f) ^ 1) |
         (*(unsigned char *)(object + 0x78) & 0x18)) == 0) {
        *(unsigned char *)(object + 0x78) &= 0xfe;
        func_1CCF50(object);
    }
    *(int *)(state + 0x68) = 0;
    *(unsigned char *)(state + 0x78) = 0x10;
}
