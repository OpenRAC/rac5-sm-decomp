/* LEVEL_18:0x1162F0 -- placement copy of LEVEL_16_1172E0.c: counts an object and accumulates per-team totals. */
typedef struct Obj {
    char pad[0xF8];
    int idx;
    int team;
} Obj;
extern int D_002E0038[4];
extern Obj *D_002E0078[4];
extern void *memset(void *, int, int);
extern int func_111BB8(void);
extern void func_114160(int a);
extern void func_124738(int a, int b, int c);

void func_1162F0(Obj *o)
{
    int sums[2];
    unsigned int i;
    int *cnt;
    Obj **pp;

    D_002E0038[o->idx] += 1;
    if (func_111BB8() == 2) {
        func_114160(o->team);
        memset(sums, 0, 8);
        cnt = D_002E0038;
        pp = D_002E0078;
        for (i = 0; i < 4; i++) {
            if (*pp != 0) {
                sums[(*pp)->team] += *cnt;
            }
            cnt++;
            pp++;
        }
        func_124738(sums[0], sums[1], 0x5A);
    }
}
