/* LEVEL_01:0x1776C0 -- allocates and clears one 0xCC-byte slot per entry of the object's table, records the count and initialises each slot from its 0x34-byte table entry. */
extern void *memset(void *p, int c, unsigned long n);

typedef struct {
    char pad00[4];
    char *tab;
    char pad08[0x34];
    unsigned char count;
} Obj;

extern char *D_002079CC;
extern unsigned int D_002079D0;
extern char D_002219C0[];

extern void *func_10F7A0(int size, int a, char *file, int line);
extern void func_177678(char *slot, long long entry);

void func_1776C0(Obj *o)
{
    unsigned int i;

    D_002079CC = func_10F7A0(o->count * 0xCC, 0, D_002219C0, 0xA0);
    memset(D_002079CC, 0, o->count * 0xCC);
    D_002079D0 = o->count;
    for (i = 0; i < D_002079D0; i++) {
        func_177678(D_002079CC + i * 0xCC, *(int *)(o->tab + i * 0x34 + 4));
    }
}
