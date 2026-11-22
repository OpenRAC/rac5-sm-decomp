/* LEVEL_01:0x114180 -- walks the cells of a triangle grid below a point, from the cell column under it downwards, and reports the nearest triangle whose plane and three edge planes contain the point, with its depth, normal and colour. */
typedef struct {
    unsigned char b[4];
} Colour4;

typedef struct {
    char pad0[8];
    float n[3];
    float d;
    float e0[4];
    float e1[4];
    float e2[4];
    Colour4 color;
} Tri;

typedef struct {
    char pad0[0xC];
    Tri *tris;
    unsigned short *counts;
    unsigned short **lists;
    int w18;
    int nx;
    int ny;
    int nz;
    float cx;
    float cy;
    float cz;
    float x0;
    float y0;
    float z0;
} Grid;

extern float fabsf(float x);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

int func_114180(float *depth, float *normal, Colour4 *color, float *pos, Grid *g)
{
    float px, py, pz;
    float best, thr, step, rel, t, v, level;
    int ix, iy0, iy1, iz;
    int nx, ny;
    int i;
    int bad, far;
    unsigned short *cnt, *cnt_end;
    unsigned short **list;
    unsigned short *e, *e_end;
    Tri *hit;
    Tri *tri;
    Tri *tris;

    px = pos[0];
    py = pos[1];
    rel = py - g->y0;
    step = g->cy;
    pz = pos[2];
    best = *depth;
    nx = g->nx;
    ny = g->ny;
    ix = (int)((px - g->x0) / g->cx);
    iy0 = (int)(rel * (1.0f / step));
    iy1 = (int)((rel - best) * (1.0f / step));
    iz = (int)((pz - g->z0) / g->cz);
    thr = best * 0.5f;
    bad = (ix < 0) | (ix + 1 > nx) | (iy0 < 0) | (iy1 + 1 > ny) | (iz < 0);
    far = iz + 1 > g->nz;
    if (far | bad) {
        return 0;
    }
    if (iy0 > ny - 1) {
        iy0 = ny - 1;
    }
    if (iy1 < 0) {
        iy1 = 0;
    }
    hit = 0;
    tris = g->tris;
    i = iy0 * nx + ix + iz * nx * ny;
    cnt = g->counts + i;
    cnt_end = cnt - ((iy0 - iy1) * nx + nx);
    list = g->lists + i;
    level = py - (g->y0 + step * (float)iy0);
    for (; cnt != cnt_end; list -= nx) {
        e = *list;
        e_end = e + *cnt;
        if (e != e_end) {
            for (; e != e_end; e++) {
                tri = tris + *e;
                if (!(fabsf(tri->n[1]) < 0.00048828125f)) {
                    t = (px * tri->n[0] + py * tri->n[1] + pz * tri->n[2] + tri->d) / tri->n[1];
                    if (!(thr < fabsf(t - thr))) {
                        v = py - t;
                        if (!(0.0f < px * tri->e0[0] + v * tri->e0[1] + pz * tri->e0[2] + tri->e0[3]) &&
                            !(0.0f < px * tri->e1[0] + v * tri->e1[1] + pz * tri->e1[2] + tri->e1[3]) &&
                            !(0.0f < px * tri->e2[0] + v * tri->e2[1] + pz * tri->e2[2] + tri->e2[3])) {
                            best = t;
                            hit = tri;
                            thr = best * 0.5f;
                        }
                    }
                }
            }
        }
        if (best < level) {
            break;
        }
        level += step;
        cnt -= nx;
    }
    if (hit != 0) {
        *depth = best;
        Copy3(normal, hit->n);
        *color = hit->color;
        return 1;
    }
    return 0;
}
