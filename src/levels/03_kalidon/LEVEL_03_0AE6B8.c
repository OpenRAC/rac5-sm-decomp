/* LEVEL_03:0x0AE6B8 -- placement copy of FRONTEND_0101D8.c: walks the selected entry's list in the menu block and sets up each item at the offset from the anchor point. */
extern char *D_0021448C;
extern unsigned char D_00214476;
extern int D_0020F848;
extern void func_0AE488(int a, float s, float *out);
extern int func_0A8400(float *v);
extern int func_0A8430(float *v);
extern void func_0AE950(int item, int z, int x, int y, float a, float b, float c, int w, float d);

void func_0AE6B8(unsigned int idx, int ax, int ay, int ref, int w, float scale)
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

    mgr = D_0021448C;
    if (mgr == 0) {
        return;
    }
    bit = *(unsigned int *)(mgr + 4) & 1;
    D_00214476 = bit;
    if (D_0020F848 != -1) {
        idx = D_0020F848;
    }
    if (*(unsigned int *)(mgr + 4) & 2) {
        p = (int *)(mgr + 0x10);
        if (D_00214476) {
            p = (int *)(mgr + 0x14);
        }
        cnt = *p++;
        if (idx < cnt) {
            p = (int *)p[idx];
            if (D_00214476) {
                p++;
            }
            if (D_00214476) {
                skip = *p++;
                p += skip;
            }
            if (D_00214476) {
                p++;
            }
            n = *p;
            func_0AE488(ref, scale, buf);
            p++;
            x = ax - func_0A8400(buf);
            y = ay - func_0A8430(buf);
            for (i = 0; i < n; i++) {
                func_0AE950(*p, 0, x, y, 1.0f, 1.0f, 0.0f, w, scale);
                p++;
            }
        }
    }
}
