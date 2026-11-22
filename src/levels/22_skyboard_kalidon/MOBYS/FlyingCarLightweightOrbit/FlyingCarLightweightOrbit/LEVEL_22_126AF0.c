/* LEVEL_22:0x126AF0 -- placement copy of LEVEL_01_175398.c: allocates and clears a table of 0xCC-byte records sized by the owner's count, then initialises each record from the matching owner entry. */
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

extern char D_0017A690[];
extern char *D_0016669C;
extern unsigned int D_001666A0;
extern void *memset(void *, int, unsigned int);
extern void *func_0EB508(int size, int zero, char *file, int line);
extern void func_126AA8(char *record, long long value);

void func_126AF0(Owner *o)
{
    unsigned int i;
    char *p;

    p = func_0EB508(o->count * 0xCC, 0, D_0017A690, 0x9B);
    D_0016669C = p;
    memset(p, 0, o->count * 0xCC);
    D_001666A0 = o->count;
    for (i = 0; i < D_001666A0; i++) {
        func_126AA8(D_0016669C + i * 0xCC, o->ents[i].w4);
    }
}
