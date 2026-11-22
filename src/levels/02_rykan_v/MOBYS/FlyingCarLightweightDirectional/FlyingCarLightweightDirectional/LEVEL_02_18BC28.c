/* LEVEL_02:0x18BC28 -- placement copy of LEVEL_01_175398.c: allocates and clears a table of 0xCC-byte records sized by the owner's count, then initialises each record from the matching owner entry. */
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

extern char D_002388C0[];
extern char *D_0021CB1C;
extern unsigned int D_0021CB20;
extern void *memset(void *, int, unsigned int);
extern void *func_115AE8(int size, int zero, char *file, int line);
extern void func_18BBE0(char *record, long long value);

void func_18BC28(Owner *o)
{
    unsigned int i;
    char *p;

    p = func_115AE8(o->count * 0xCC, 0, D_002388C0, 0x9B);
    D_0021CB1C = p;
    memset(p, 0, o->count * 0xCC);
    D_0021CB20 = o->count;
    for (i = 0; i < D_0021CB20; i++) {
        func_18BBE0(D_0021CB1C + i * 0xCC, o->ents[i].w4);
    }
}
