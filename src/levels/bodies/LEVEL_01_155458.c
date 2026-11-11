/* LEVEL_01:0x155458 -- scales a base amount by the owner's cell nibble and passes it on. */
struct Cells {
    char pad[0x10520];
    unsigned char nib[1];
};

extern char *D_00207404;
extern char *D_00206D90;
extern struct Cells *D_001F3FAC;
extern int D_0021A7F0;
extern int rand(void);
extern int func_028650(void);
extern unsigned int func_1555B8(char *o);
extern void func_154E00(char *o, unsigned int amount);

static __inline__ unsigned int *MinRef(unsigned int *a, unsigned int *b)
{
    return (*a < *b) ? a : b;
}

void func_155458(char *o)
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

    g = D_00207404;
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
        idx = (o - *(char **)(D_00206D90 + 0x44)) >> 7;
        if (idx < 0x400) {
            tile = D_001F3FAC->nib[(idx >> 1) + (D_0021A7F0 << 9)];
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
        amount = (*(int *)(ctl + 4) + m) * func_028650();
    } else {
        amount = func_1555B8(o);
    }
    a = tile;
    b = 2;
    func_154E00(o, amount >> *MinRef(&a, &b));
}
