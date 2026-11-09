/* LEVEL_01.REL:0x129768: reviewed 512-byte candidate, held for ABI review.
 * Relocates two pointer tables (and their chains) by a base; second function
 * loads the next chunk.
 * gnu-ee-trial C with gnu-ee-trial links 512/512 bytes and is byte-exact at
 * this and 19 other USA placements, but the prototypes disagree.
 * It declares func_029750 returning int with (int, pointer), but the accepted
 * LEVEL_01_029750.c defines it returning void with (pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_029750(int h, int *info);
extern int func_029FB0(void);
extern void MCPI_SendProgress(int a, int b) __asm__("MCPI_SendProgress__Fii");
extern int func_11A0C8(char *dst, int size, int a, int h);

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

extern int D_00206E7C;
extern unsigned int D_00206E80;

void func_129768(Base *b)
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

char *func_129888(char *base)
{
    int info[4];
    unsigned int rem;
    unsigned int chunk;
    char *buf;

    if (func_029750(D_00206E7C, info) < 0) {
        return 0;
    }
    rem = D_00206E80;
    if (rem == 0) {
        return base + 0x80000;
    }
    if (rem > 0x7FFFF) {
        chunk = 0x80000;
        D_00206E80 = rem - chunk;
    } else {
        D_00206E80 = 0;
        chunk = rem;
    }
    MCPI_SendProgress(func_029FB0(), D_00206E80);
    buf = base + 0x80000;
    if (func_11A0C8(buf, (chunk + 0x7FF) & 0xFFFFF800, 1, D_00206E7C)) {
        buf = 0;
    }
    return buf;
}
