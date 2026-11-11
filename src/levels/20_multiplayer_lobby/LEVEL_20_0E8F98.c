/* LEVEL_20:0x0E8F98 -- placement copy of LEVEL_16_116698.c: initializes two table entries from a template and selects a mode. */
typedef struct {
    char b[0x40];
} Blk;

typedef struct {
    Blk *self;
    int z;
    float f;
} Hdr;

typedef struct {
    Blk blk;
    int pad[2];
    unsigned int idx;
    Hdr next;
} Ent;

extern Ent D_002030DC[2];
extern Blk D_0012DD00;
extern int D_00131510;
extern void func_000BF8(int a);

void func_0E8F98(void)
{
    unsigned int i;
    Ent *e;

    for (i = 0; i < 2; i++) {
        e = &D_002030DC[i];
        e->blk = D_0012DD00;
        e->idx = i;
        ((Hdr *)e)[-1].self = &e->blk;
        ((Hdr *)e)[-1].z = 0;
        ((Hdr *)e)[-1].f = 0.54977876f;
    }
    if (D_00131510 == 0x14) {
        func_000BF8(1);
    } else {
        func_000BF8(2);
    }
}
