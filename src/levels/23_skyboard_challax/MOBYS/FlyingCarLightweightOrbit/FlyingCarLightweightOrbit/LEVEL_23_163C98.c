/* LEVEL_23:0x163C98 -- placement copy of LEVEL_01_175398.c: allocates and clears a table of 0xCC-byte records sized by the owner's count, then initialises each record from the matching owner entry. */
typedef struct {
    int w0;
    int w4;
    char pad_08[0x2C];
} Ent;

typedef struct {
    char pad_00[4];
    Ent *ents;
    char pad_08[0x34];
    unsigned char count;
} Owner;

extern char D_001F2F60[];
extern char *D_001DB0C4;
extern unsigned int D_001DB0C8;
extern void *memset(void *, int, unsigned int);
extern void *func_101FC8(int size, int zero, char *file, int line);
extern void func_163C50(char *record, long long value);

void func_163C98(Owner *o)
{
    unsigned int i;
    char *p;

    p = func_101FC8(o->count * 0xCC, 0, D_001F2F60, 0x9B);
    D_001DB0C4 = p;
    memset(p, 0, o->count * 0xCC);
    D_001DB0C8 = o->count;
    for (i = 0; i < D_001DB0C8; i++) {
        func_163C50(D_001DB0C4 + i * 0xCC, o->ents[i].w4);
    }
}
