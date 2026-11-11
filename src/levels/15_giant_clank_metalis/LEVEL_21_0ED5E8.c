/* LEVEL_21:0x0ED5E8 -- placement copy of LEVEL_01_129768.c: relocates two pointer tables (and their chains) by a base; second function loads the next chunk. */
extern int func_022F28(int h, int *info);
extern int func_023788(void);
extern void MCPI_SendProgress(int a, int b) __asm__("MCPI_SendProgress__Fii");
extern int func_0DE428(char *dst, int size, int a, int h);

typedef struct {
    char pad0[0x6C];
    unsigned int next6C;
} N2;

typedef struct {
    char pad0[0x70];
    unsigned int next70;
    char pad74[0x10];
    unsigned int p84;
} N1;

typedef struct {
    unsigned int pad0;
    unsigned int tab1[12];
    char padC[0x8C];
    unsigned int tab2[1024];
} Base;

extern int D_0015B7FC;
extern unsigned int D_0015B800;

void func_0ED5E8(Base *b)
{
    unsigned int i;
    unsigned int j;
    N1 *n;
    N2 *m;
    unsigned int *tb;

    for (i = 0; i < 12; i++) {
        if (b->tab1[i] != 0) {
            b->tab1[i] = b->tab1[i] + (unsigned int)b;
            n = (N1 *)b->tab1[i];
            if (n->p84 != 0) {
                n->p84 = n->p84 + (unsigned int)b + 0x10C0;
            }
            for (; n != 0 && n->next70 != 0;) {
                n->next70 = n->next70 + (unsigned int)b;
                n = (N1 *)n->next70;
                if (n->p84 != 0) {
                    n->p84 = n->p84 + (unsigned int)b + 0x10C0;
                }
            }
        }
    }
    tb = b->tab2;
    for (j = 0; j < 1024; j++) {
        if (tb[j] != 0) {
            tb[j] = tb[j] + (unsigned int)b;
            m = (N2 *)tb[j];
            for (; m != 0 && m->next6C != 0;) {
                m->next6C = m->next6C + (unsigned int)b;
                m = (N2 *)m->next6C;
            }
        }
    }
}

char *func_0ED708(char *base)
{
    int info[4];
    unsigned int rem;
    unsigned int chunk;
    char *buf;

    if (func_022F28(D_0015B7FC, info) < 0) {
        return 0;
    }
    rem = D_0015B800;
    if (rem == 0) {
        return base + 0x80000;
    }
    if (rem > 0x7FFFF) {
        chunk = 0x80000;
        D_0015B800 = rem - chunk;
    } else {
        D_0015B800 = 0;
        chunk = rem;
    }
    MCPI_SendProgress(func_023788(), D_0015B800);
    buf = base + 0x80000;
    if (func_0DE428(buf, (chunk + 0x7FF) & 0xFFFFF800, 1, D_0015B7FC)) {
        buf = 0;
    }
    return buf;
}
