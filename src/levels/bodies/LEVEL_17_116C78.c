/* LEVEL_17:0x116C78 -- placement copy of LEVEL_16_1172E0.c: counts an object and accumulates per-team totals. */
typedef struct Obj {
    char pad[0xF8];
    int idx;
    int team;
} Obj;
extern int D_002D0FB8[4];
extern Obj *D_002D0FF8[4];
extern void *memset(void *, int, int);
extern int func_112590(void);
extern void func_114B20(int a);
extern void func_1250A8(int a, int b, int c);

void func_116C78(Obj *o)
{
    int sums[2];
    unsigned int i;
    int *cnt;
    Obj **pp;

    D_002D0FB8[o->idx] += 1;
    if (func_112590() == 2) {
        func_114B20(o->team);
        memset(sums, 0, 8);
        cnt = D_002D0FB8;
        pp = D_002D0FF8;
        for (i = 0; i < 4; i++) {
            if (*pp != 0) {
                sums[(*pp)->team] += *cnt;
            }
            cnt++;
            pp++;
        }
        func_1250A8(sums[0], sums[1], 0x5A);
    }
}
