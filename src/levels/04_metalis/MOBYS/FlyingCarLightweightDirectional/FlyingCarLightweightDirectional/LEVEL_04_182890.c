/* LEVEL_04:0x182890 -- placement copy of LEVEL_01_175398.c: allocates and clears a table of 0xCC-byte records sized by the owner's count, then initialises each record from the matching owner entry. */
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

extern char D_0023B0E8[];
extern char *D_002211CC;
extern unsigned int D_002211D0;
extern void *memset(void *, int, unsigned int);
extern void *func_11AD08(int size, int zero, char *file, int line);
extern void func_182848(char *record, long long value);

void func_182890(Owner *o)
{
    unsigned int i;
    char *p;

    p = func_11AD08(o->count * 0xCC, 0, D_0023B0E8, 0x9B);
    D_002211CC = p;
    memset(p, 0, o->count * 0xCC);
    D_002211D0 = o->count;
    for (i = 0; i < D_002211D0; i++) {
        func_182848(D_002211CC + i * 0xCC, o->ents[i].w4);
    }
}
