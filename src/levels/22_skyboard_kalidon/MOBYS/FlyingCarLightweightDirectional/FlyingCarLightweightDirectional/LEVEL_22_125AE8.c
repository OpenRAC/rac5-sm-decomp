/* LEVEL_22:0x125AE8 -- placement copy of LEVEL_01_175398.c: allocates and clears a table of 0xCC-byte records sized by the owner's count, then initialises each record from the matching owner entry. */
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

extern char D_0017A3D0[];
extern char *D_0016668C;
extern unsigned int D_00166690;
extern void *memset(void *, int, unsigned int);
extern void *func_0EB508(int size, int zero, char *file, int line);
extern void func_125AA0(char *record, long long value);

void func_125AE8(Owner *o)
{
    unsigned int i;
    char *p;

    p = func_0EB508(o->count * 0xCC, 0, D_0017A3D0, 0x9B);
    D_0016668C = p;
    memset(p, 0, o->count * 0xCC);
    D_00166690 = o->count;
    for (i = 0; i < D_00166690; i++) {
        func_125AA0(D_0016668C + i * 0xCC, o->ents[i].w4);
    }
}
