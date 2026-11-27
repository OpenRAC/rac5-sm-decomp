/* LEVEL_03:0x1938A8 -- returns one word of the record's table picked by a kind (0-3) and an index. */
typedef struct {
    char pad_00[0x54];
    char *table;
} Obj;

int func_1938A8(Obj *o, unsigned int kind, int i)
{
    char *p = o->table;

    switch (kind) {
    case 0:
        return *(int *)(p + (i << 2) + 0x50);
    case 1:
        return *(int *)(p + (i << 2) + 0x54);
    case 2:
        return *(int *)(p + (i << 2) + 0x5C);
    case 3:
        return *(int *)(p + (i << 2) + 0x64);
    }
    return 0;
}
