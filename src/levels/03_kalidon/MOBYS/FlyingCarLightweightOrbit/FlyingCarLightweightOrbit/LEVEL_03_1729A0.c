/* LEVEL_03:0x1729A0 -- placement copy of LEVEL_01_175398.c: allocates and clears a table of 0xCC-byte records sized by the owner's count, then initialises each record from the matching owner entry. */
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

extern char D_0023A7F0[];
extern char *D_00220064;
extern unsigned int D_00220068;
extern void *memset(void *, int, unsigned int);
extern void *func_10D468(int size, int zero, char *file, int line);
extern void func_172958(char *record, long long value);

void func_1729A0(Owner *o)
{
    unsigned int i;
    char *p;

    p = func_10D468(o->count * 0xCC, 0, D_0023A7F0, 0x9B);
    D_00220064 = p;
    memset(p, 0, o->count * 0xCC);
    D_00220068 = o->count;
    for (i = 0; i < D_00220068; i++) {
        func_172958(D_00220064 + i * 0xCC, o->ents[i].w4);
    }
}
