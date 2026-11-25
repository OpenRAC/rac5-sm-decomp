/* LEVEL_23:0x164FB8 -- placement copy of LEVEL_01_1776C0.c: allocates and clears one 0xCC-byte slot per entry of the object's table, records the count and initialises each slot from its 0x34-byte table entry. */
extern void *memset(void *p, int c, unsigned long n);

typedef struct {
    char pad00[4];
    char *tab;
    char pad08[0x34];
    unsigned char count;
} Obj;

extern char *D_001DB0D4;
extern unsigned int D_001DB0D8;
extern char D_001F3218[];

extern void *func_101FC8(int size, int a, char *file, int line);
extern void func_164F70(char *slot, long long entry);

void func_164FB8(Obj *o)
{
    unsigned int i;

    D_001DB0D4 = func_101FC8(o->count * 0xCC, 0, D_001F3218, 0xA0);
    memset(D_001DB0D4, 0, o->count * 0xCC);
    D_001DB0D8 = o->count;
    for (i = 0; i < D_001DB0D8; i++) {
        func_164F70(D_001DB0D4 + i * 0xCC, *(int *)(o->tab + i * 0x34 + 4));
    }
}
