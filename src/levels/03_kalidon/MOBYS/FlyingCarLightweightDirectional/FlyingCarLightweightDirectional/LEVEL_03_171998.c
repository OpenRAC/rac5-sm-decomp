/* LEVEL_03:0x171998 -- placement copy of LEVEL_01_175398.c: allocates and clears a table of 0xCC-byte records sized by the owner's count, then initialises each record from the matching owner entry. */
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

extern char D_0023A530[];
extern char *D_00220054;
extern unsigned int D_00220058;
extern void *memset(void *, int, unsigned int);
extern void *func_10D468(int size, int zero, char *file, int line);
extern void func_171950(char *record, long long value);

void func_171998(Owner *o)
{
    unsigned int i;
    char *p;

    p = func_10D468(o->count * 0xCC, 0, D_0023A530, 0x9B);
    D_00220054 = p;
    memset(p, 0, o->count * 0xCC);
    D_00220058 = o->count;
    for (i = 0; i < D_00220058; i++) {
        func_171950(D_00220054 + i * 0xCC, o->ents[i].w4);
    }
}
