/* LEVEL_01:0x01DE20 -- scans grid cells around a box and keeps the smallest result of the per-record test. */
typedef struct Rec {
    char pad_00[0x48];
    unsigned short f_48;
} Rec;

typedef struct Grid {
    char pad_00[8];
    void *f_08;
    char *recs;
    unsigned short *cnt;
    unsigned short **lists;
} Grid;

extern int func_113850(int *a, int *b, int *c, int *d, int *e, int *f, int *g, int *h, Grid *gr, int p, int q);
extern float func_01DC88(int a, int b, Rec *r, void *g8, float f, float g, float h);

float func_01DE20(int a, int b, float lim, int p, float g, float h, int q, Grid *gr, int mask)
{
    int x0;
    int x1;
    int xs;
    int y0;
    int y1;
    int ys;
    int z0;
    int z1;
    int x;
    int y;
    int z;
    int k;
    int n;
    unsigned short *lst;
    Rec *r;
    char *recs;
    unsigned short *cnt;
    unsigned short **lists;
    void *f08;

    if (func_113850(&x0, &x1, &xs, &y0, &y1, &ys, &z0, &z1, gr, p, q)) {
        recs = gr->recs;
        f08 = gr->f_08;
        for (x = x0; x != x1; x += xs) {
            for (y = y0; y != y1; y += ys) {
                cnt = gr->cnt + (x + y);
                lists = gr->lists + (x + y);
                for (z = z0; z != z1; z++) {
                    n = cnt[z];
                    lst = lists[z];
                    for (k = 0; k < n; k++) {
                        r = (Rec *)(recs + lst[k] * 0x4C);
                        if (!(r->f_48 & mask)) {
                            lim = func_01DC88(a, b, r, f08, lim, g, h);
                            if (lim < 4.8828125e-4f) {
                                goto out;
                            }
                        }
                    }
                }
            }
        }
    }
out:
    return lim;
}
