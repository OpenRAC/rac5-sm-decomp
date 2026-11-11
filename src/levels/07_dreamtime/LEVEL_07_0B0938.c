/* LEVEL_07:0x0B0938 -- placement copy of FRONTEND_0101D8.c: walks the selected entry's list in the menu block and sets up each item at the offset from the anchor point. */
extern char *D_0021010C;
extern unsigned char D_002100F6;
extern int D_0020B4C8;
extern void func_0B0708(int a, float s, float *out);
extern int func_0AA680(float *v);
extern int func_0AA6B0(float *v);
extern void func_0B0BD0(int item, int z, int x, int y, float a, float b, float c, int w, float d);

void func_0B0938(unsigned int idx, int ax, int ay, int ref, int w, float scale)
{
    float buf[4];
    char *mgr;
    int *p;
    unsigned int bit;
    unsigned int i;
    unsigned int n;
    unsigned int cnt;
    unsigned int skip;
    int x;
    int y;

    mgr = D_0021010C;
    if (mgr == 0) {
        return;
    }
    bit = *(unsigned int *)(mgr + 4) & 1;
    D_002100F6 = bit;
    if (D_0020B4C8 != -1) {
        idx = D_0020B4C8;
    }
    if (*(unsigned int *)(mgr + 4) & 2) {
        p = (int *)(mgr + 0x10);
        if (D_002100F6) {
            p = (int *)(mgr + 0x14);
        }
        cnt = *p++;
        if (idx < cnt) {
            p = (int *)p[idx];
            if (D_002100F6) {
                p++;
            }
            if (D_002100F6) {
                skip = *p++;
                p += skip;
            }
            if (D_002100F6) {
                p++;
            }
            n = *p;
            func_0B0708(ref, scale, buf);
            p++;
            x = ax - func_0AA680(buf);
            y = ay - func_0AA6B0(buf);
            for (i = 0; i < n; i++) {
                func_0B0BD0(*p, 0, x, y, 1.0f, 1.0f, 0.0f, w, scale);
                p++;
            }
        }
    }
}
