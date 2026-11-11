/* LEVEL_09:0x14E438 -- placement copy of LEVEL_01_155458.c: scales a base amount by the owner's cell nibble and passes it on. */
struct Cells {
    char pad[0x10520];
    unsigned char nib[1];
};

extern char *D_001F0F04;
extern char *D_001F0890;
extern struct Cells *D_001DDDAC;
extern int D_002043F0;
extern int rand(void);
extern int func_027658(void);
extern unsigned int func_14E598(char *o);
extern void func_14DDE0(char *o, unsigned int amount);

static __inline__ unsigned int *MinRef(unsigned int *a, unsigned int *b)
{
    return (*a < *b) ? a : b;
}

void func_14E438(char *o)
{
    char *g;
    char *ctl;
    int type;
    int flag;
    int n;
    int m;
    unsigned int tile;
    unsigned int idx;
    unsigned int amount;
    unsigned int a;
    unsigned int b;

    g = D_001F0F04;
    if (g == 0) {
        return;
    }
    ctl = *(char **)(g + 0x58);
    type = *(int *)(*(char **)(o + 0x40) + 0x24);
    flag = 0;
    if (type == 0x114CD815 || type == 0x4109ABC7) {
        flag = 1;
    }
    tile = 0;
    if (*(unsigned char *)(*(char **)(o + 0x40) + 0x3F) == 1 && *(int *)(o + 0x5C) != 0) {
        idx = (o - *(char **)(D_001F0890 + 0x44)) >> 7;
        if (idx < 0x400) {
            tile = D_001DDDAC->nib[(idx >> 1) + (D_002043F0 << 9)];
            if (idx & 1) {
                tile = tile >> 4;
            } else {
                tile = tile & 0xF;
            }
        }
    }
    if (flag) {
        n = *(int *)(ctl + 8);
        m = n ? rand() % n : 0;
        amount = (*(int *)(ctl + 4) + m) * func_027658();
    } else {
        amount = func_14E598(o);
    }
    a = tile;
    b = 2;
    func_14DDE0(o, amount >> *MinRef(&a, &b));
}
