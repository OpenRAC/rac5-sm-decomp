/* LEVEL_22:0x127E10 -- placement copy of LEVEL_01_1776C0.c: allocates and clears one 0xCC-byte slot per entry of the object's table, records the count and initialises each slot from its 0x34-byte table entry. */
extern void *memset(void *p, int c, unsigned long n);

typedef struct {
    char pad00[4];
    char *tab;
    char pad08[0x34];
    unsigned char count;
} Obj;

extern char *D_001666AC;
extern unsigned int D_001666B0;
extern char D_0017A948[];

extern void *func_0EB508(int size, int a, char *file, int line);
extern void func_127DC8(char *slot, long long entry);

void func_127E10(Obj *o)
{
    unsigned int i;

    D_001666AC = func_0EB508(o->count * 0xCC, 0, D_0017A948, 0xA0);
    memset(D_001666AC, 0, o->count * 0xCC);
    D_001666B0 = o->count;
    for (i = 0; i < D_001666B0; i++) {
        func_127DC8(D_001666AC + i * 0xCC, *(int *)(o->tab + i * 0x34 + 4));
    }
}
