/* LEVEL_18:0x1720C0 -- placement copy of LEVEL_16_16D3C8.c: picks a weighted random candidate across slots, announces it and updates the owner. */
struct Args {
    int a;
    unsigned int b;
};

extern int rand(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern char *D_001BF6D4;
extern char D_002E58F8[];

extern void func_18F4A8(struct Args *a);
extern void func_0CC258(char *p, int a, float f);
extern void func_072BC8(char *a0, char *a1, float f12, float f13, float f14, float f15, int a2, int a3, int t0, int t1, int t2, int t3);
extern int func_020CB8(char *s, int i);
extern int func_111988(int i);
extern int func_021C28(int i, int j);
extern int func_111A00(int x);
extern int func_021CA8(int i, int x, int k);
extern unsigned int *func_021A48(int x);
extern int func_021B18(int i, int x, int j, int k);
extern void func_021A78(int i, int x, int k);
extern void func_020AB0(char *s, int i);
extern char *func_10DFE0(int id);
extern int *func_021758(int i, int k);
extern void func_0A6FA8(int a, char *s, int b, int c);

void func_1720C0(char *self, char *st)
{
    struct Args args;
    int ids[44];
    float w[44];
    char *d;
    unsigned int i, j, n, p, q, u, v;
    int x, best, k;
    float bw, r;
    char *a, *b, *c;

    args.a = *(int *)(st + 0x59C);
    args.b = 0xFF4080FF;
    d = *(char **)(self + 0x58);
    func_18F4A8(&args);
    func_0CC258(d + 4, 0x80FFFF, 1.5f);
    if (D_001BF6D4 != 0) {
        func_072BC8(self, D_001BF6D4, *(float *)(D_001BF6D4 + 0x14), *(float *)(D_001BF6D4 + 0x18), *(float *)(D_001BF6D4 + 0x1C), *(float *)(D_001BF6D4 + 0x20), 0, 0, 0, 0, 0, 1);
    }
    n = 0;
    for (i = 1; i < 16; i++) {
        if (func_020CB8(st, i) == 0) {
            continue;
        }
        if (func_111988(i) == 0) {
            continue;
        }
        for (j = 0; j < 3; j++) {
            x = func_021C28(i, j);
            if (x == 0) {
                continue;
            }
            if (func_111A00(x) == 0) {
                continue;
            }
            if (func_021CA8(i, x, *(int *)(st + 0xF8)) != 0) {
                continue;
            }
            ids[n] = x;
            w[n] = (float)func_021A48(x)[6];
            n++;
        }
    }
    if (n != 0) {
        best = ids[0];
        bw = (float)rand() * 4.6566123e-10f * w[0];
        for (p = 1; p < n; p++) {
            r = (float)rand() * 4.6566123e-10f * w[p];
            if (r < bw) {
                best = ids[p];
                bw = r;
            }
        }
        for (u = 1; u < 16; u++) {
            for (v = 0; v < 3; v++) {
                if (func_021B18(u, best, v, *(int *)(st + 0xF8)) != 0) {
                    func_021A78(u, best, *(int *)(st + 0xF8));
                    func_020AB0(st, u);
                    a = func_10DFE0(0x2B7);
                    b = func_10DFE0(((int *)func_021A48(best))[2]);
                    k = *(int *)(st + 0xF8);
                    c = func_10DFE0(func_021758(u, k)[4]);
                    sprintf(D_002E58F8, a, b, c);
                    func_0A6FA8(*(int *)(st + 0xF4) - 1, D_002E58F8, 0, 0x5A);
                    goto done;
                }
            }
        }
    }
done:
    self[0x45] = 5;
    *(float *)(d + 0x5C) = 36.000717f;
}
