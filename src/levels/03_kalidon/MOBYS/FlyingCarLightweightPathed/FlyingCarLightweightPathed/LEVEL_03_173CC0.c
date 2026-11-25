/* LEVEL_03:0x173CC0 -- placement copy of LEVEL_01_1776C0.c: allocates and clears one 0xCC-byte slot per entry of the object's table, records the count and initialises each slot from its 0x34-byte table entry. */
extern void *memset(void *p, int c, unsigned long n);

typedef struct {
    char pad00[4];
    char *tab;
    char pad08[0x34];
    unsigned char count;
} Obj;

extern char *D_00220074;
extern unsigned int D_00220078;
extern char D_0023AAA8[];

extern void *func_10D468(int size, int a, char *file, int line);
extern void func_173C78(char *slot, long long entry);

void func_173CC0(Obj *o)
{
    unsigned int i;

    D_00220074 = func_10D468(o->count * 0xCC, 0, D_0023AAA8, 0xA0);
    memset(D_00220074, 0, o->count * 0xCC);
    D_00220078 = o->count;
    for (i = 0; i < D_00220078; i++) {
        func_173C78(D_00220074 + i * 0xCC, *(int *)(o->tab + i * 0x34 + 4));
    }
}
