/* LEVEL_06:0x163FC8 -- placement copy of LEVEL_01_175398.c: allocates and clears a table of 0xCC-byte records sized by the owner's count, then initialises each record from the matching owner entry. */
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

extern char D_0020EF20[];
extern char *D_001F654C;
extern unsigned int D_001F6550;
extern void *memset(void *, int, unsigned int);
extern void *func_105D70(int size, int zero, char *file, int line);
extern void func_163F80(char *record, long long value);

void func_163FC8(Owner *o)
{
    unsigned int i;
    char *p;

    p = func_105D70(o->count * 0xCC, 0, D_0020EF20, 0x9B);
    D_001F654C = p;
    memset(p, 0, o->count * 0xCC);
    D_001F6550 = o->count;
    for (i = 0; i < D_001F6550; i++) {
        func_163F80(D_001F654C + i * 0xCC, o->ents[i].w4);
    }
}
