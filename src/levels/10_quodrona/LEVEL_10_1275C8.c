/* LEVEL_10:0x1275C8 -- placement copy of LEVEL_01_129768.c: relocates two pointer tables (and their chains) by a base; second function loads the next chunk. */
extern int func_029528(int h, int *info);
extern int func_029D88(void);
extern void MCPI_SendProgress(int a, int b) __asm__("MCPI_SendProgress__Fii");
extern int func_1182E0(char *dst, int size, int a, int h);

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

extern int D_0020FADC;
extern unsigned int D_0020FAE0;

void func_1275C8(Base *b)
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

char *func_1276E8(char *base)
{
    int info[4];
    unsigned int rem;
    unsigned int chunk;
    char *buf;

    if (func_029528(D_0020FADC, info) < 0) {
        return 0;
    }
    rem = D_0020FAE0;
    if (rem == 0) {
        return base + 0x80000;
    }
    if (rem > 0x7FFFF) {
        chunk = 0x80000;
        D_0020FAE0 = rem - chunk;
    } else {
        D_0020FAE0 = 0;
        chunk = rem;
    }
    MCPI_SendProgress(func_029D88(), D_0020FAE0);
    buf = base + 0x80000;
    if (func_1182E0(buf, (chunk + 0x7FF) & 0xFFFFF800, 1, D_0020FADC)) {
        buf = 0;
    }
    return buf;
}
