/* LEVEL_16:0x1172E0 -- counts an object and accumulates per-team totals. */
typedef struct Obj {
    char pad[0xF8];
    int idx;
    int team;
} Obj;
extern int D_002DFCB8[4];
extern Obj *D_002DFCF8[4];
extern void *memset(void *, int, int);
extern int func_112E00(void);
extern void func_1153C0(int a);
extern void func_125680(int a, int b, int c);

void func_1172E0(Obj *o)
{
    int sums[2];
    unsigned int i;
    int *cnt;
    Obj **pp;

    D_002DFCB8[o->idx] += 1;
    if (func_112E00() == 2) {
        func_1153C0(o->team);
        memset(sums, 0, 8);
        cnt = D_002DFCB8;
        pp = D_002DFCF8;
        for (i = 0; i < 4; i++) {
            if (*pp != 0) {
                sums[(*pp)->team] += *cnt;
            }
            cnt++;
            pp++;
        }
        func_125680(sums[0], sums[1], 0x5A);
    }
}
