/* LEVEL_03:0x039678 -- calls a callback fetched from a child's dispatch table with fixed arguments. */
typedef struct Table_039678 {
    char pad_00[0x20];
    int (*fn)(void *, int, float, int, int, int, int);
} Table_039678;

typedef struct Child_039678 {
    char pad_00[0x40];
    Table_039678 *table;
} Child_039678;

typedef struct Object_039678 {
    char pad_00[0x5D4];
    Child_039678 *child;
} Object_039678;

void func_039678(Object_039678 *object)
{
    Child_039678 *child = object->child;

    if (child == 0)
        return;
    child->table->fn(child, 14, 0.0f, 0, 0, 0, 0);
}
