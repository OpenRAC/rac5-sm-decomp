/* LEVEL_02:0x18DF50 -- placement copy of LEVEL_01_1776C0.c: allocates and clears one 0xCC-byte slot per entry of the object's table, records the count and initialises each slot from its 0x34-byte table entry. */
extern void *memset(void *p, int c, unsigned long n);

typedef struct {
    char pad00[4];
    char *tab;
    char pad08[0x34];
    unsigned char count;
} Obj;

extern char *D_0021CB3C;
extern unsigned int D_0021CB40;
extern char D_00238E38[];

extern void *func_115AE8(int size, int a, char *file, int line);
extern void func_18DF08(char *slot, long long entry);

void func_18DF50(Obj *o)
{
    unsigned int i;

    D_0021CB3C = func_115AE8(o->count * 0xCC, 0, D_00238E38, 0xA0);
    memset(D_0021CB3C, 0, o->count * 0xCC);
    D_0021CB40 = o->count;
    for (i = 0; i < D_0021CB40; i++) {
        func_18DF08(D_0021CB3C + i * 0xCC, *(int *)(o->tab + i * 0x34 + 4));
    }
}
