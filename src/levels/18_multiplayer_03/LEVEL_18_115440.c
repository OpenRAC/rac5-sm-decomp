/* LEVEL_18:0x115440 -- placement copy of LEVEL_16_116698.c: initializes two table entries from a template and selects a mode. */
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

extern Ent D_002DFF04[2];
extern Blk D_001CE200;
extern int D_001D1A20;
extern void func_000C38(int a);

void func_115440(void)
{
    unsigned int i;
    Ent *e;

    for (i = 0; i < 2; i++) {
        e = &D_002DFF04[i];
        e->blk = D_001CE200;
        e->idx = i;
        ((Hdr *)e)[-1].self = &e->blk;
        ((Hdr *)e)[-1].z = 0;
        ((Hdr *)e)[-1].f = 0.54977876f;
    }
    if (D_001D1A20 == 0x14) {
        func_000C38(1);
    } else {
        func_000C38(2);
    }
}
