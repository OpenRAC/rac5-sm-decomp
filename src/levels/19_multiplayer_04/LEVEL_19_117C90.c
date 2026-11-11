/* LEVEL_19:0x117C90 -- placement copy of LEVEL_16_1172E0.c: counts an object and accumulates per-team totals. */
typedef struct Obj {
    char pad[0xF8];
    int idx;
    int team;
} Obj;
extern int D_002DFE38[4];
extern Obj *D_002DFE78[4];
extern void *memset(void *, int, int);
extern int func_1135A8(void);
extern void func_115B38(int a);
extern void func_125FE8(int a, int b, int c);

void func_117C90(Obj *o)
{
    int sums[2];
    unsigned int i;
    int *cnt;
    Obj **pp;

    D_002DFE38[o->idx] += 1;
    if (func_1135A8() == 2) {
        func_115B38(o->team);
        memset(sums, 0, 8);
        cnt = D_002DFE38;
        pp = D_002DFE78;
        for (i = 0; i < 4; i++) {
            if (*pp != 0) {
                sums[(*pp)->team] += *cnt;
            }
            cnt++;
            pp++;
        }
        func_125FE8(sums[0], sums[1], 0x5A);
    }
}
