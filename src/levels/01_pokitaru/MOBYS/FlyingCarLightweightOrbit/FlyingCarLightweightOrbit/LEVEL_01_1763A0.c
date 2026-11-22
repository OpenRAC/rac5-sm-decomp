/* LEVEL_01:0x1763A0 -- placement copy of LEVEL_01_175398.c: allocates and clears a table of 0xCC-byte records sized by the owner's count, then initialises each record from the matching owner entry. */
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

extern char D_00221708[];
extern char *D_002079BC;
extern unsigned int D_002079C0;
extern void *memset(void *, int, unsigned int);
extern void *func_10F7A0(int size, int zero, char *file, int line);
extern void func_176358(char *record, long long value);

void func_1763A0(Owner *o)
{
    unsigned int i;
    char *p;

    p = func_10F7A0(o->count * 0xCC, 0, D_00221708, 0x9B);
    D_002079BC = p;
    memset(p, 0, o->count * 0xCC);
    D_002079C0 = o->count;
    for (i = 0; i < D_002079C0; i++) {
        func_176358(D_002079BC + i * 0xCC, o->ents[i].w4);
    }
}
