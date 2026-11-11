/* LEVEL_07:0x0010F0 -- placement copy of LEVEL_01_0010F0.c: appends a pair of words to one 0x30-byte group of
   the global table, indexed by the group's incremented count. */
typedef struct {
    int a;
    int b;
} Pair;

typedef struct {
    Pair pairs[4];
    int count;
    char pad24[0xC];
} Group;

typedef struct {
    char pad[0x90];
    Group groups[1];
} Table;

typedef struct {
    Table *table;
} Globals;

extern Globals D_00203548;

void func_0010F0(int index, int a, int b)
{
    int n = ++D_00203548.table->groups[index].count;

    D_00203548.table->groups[index].pairs[n].a = a;
    D_00203548.table->groups[index].pairs[n].b = b;
}
