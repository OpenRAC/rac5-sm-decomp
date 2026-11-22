/* LEVEL_04:0x186B00 -- placement copy of LEVEL_01_17AD08.c: claims a free slot of the owner's table, starts the effect at its record and plays a random pickup effect. */
typedef struct Ent {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Ent;

typedef struct Own {
    char pad_00[0x10];
    char pos[0x48];
    char *st;
} Own;

extern char D_00221260[];

extern int rand(void);
extern int func_186A90(Own *o);
extern char *func_06FA68(void);
extern void func_083C10(char *t, char *rec, int a, int b);
extern void func_06FAB8(char *h, char *src, char *a, char *rec, char *pos);
extern unsigned int func_000870(unsigned int index);
extern void func_083E30(Own *o, Ent *e, int a, int b, int c, int d, int e2, int f,
                        float f0, float f1, float f2, float f3);
extern void func_0F6E68(int a, char *v);
extern void func_07FAE8(char *t, int a);

void func_186B00(Own *o, char *t)
{
    char *st;
    int idx;
    int n;
    char **slot;
    char **tab;
    char *h;
    int off;
    char *rec;
    Ent *e;

    st = o->st;
    idx = func_186A90(o);
    if (idx < 0) {
        return;
    }
    h = func_06FA68();
    off = idx * 4;
    tab = (char **)(st + 0xB8);
    slot = (char **)((char *)tab + off);
    *slot = h;
    if (h == 0) {
        return;
    }
    rec = st + (idx * 0xC + 0x94);
    n = 3;
    func_083C10(t, rec, 0, 0);
    func_06FAB8(*slot, D_00221260, st + 0x88, rec, o->pos);
    (st + idx)[0xC4] = 1;
    e = (Ent *)func_000870(rand() % n + 3);
    if (e != 0) {
        func_083E30(o, e, 0, 0, 0, 0, 0, 1, e->f_14, e->f_18, e->f_1C, e->f_20);
    }
    func_0F6E68(2, rec);
    func_07FAE8(t, 1);
}
