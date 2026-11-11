/* LEVEL_10:0x0AFA50 -- placement copy of FRONTEND_0101D8.c: walks the selected entry's list in the menu block and sets up each item at the offset from the anchor point. */
extern char *D_00204E0C;
extern unsigned char D_00204DF6;
extern int D_002001C8;
extern void func_0AF820(int a, float s, float *out);
extern int func_0A9798(float *v);
extern int func_0A97C8(float *v);
extern void func_0AFCE8(int item, int z, int x, int y, float a, float b, float c, int w, float d);

void func_0AFA50(unsigned int idx, int ax, int ay, int ref, int w, float scale)
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

    mgr = D_00204E0C;
    if (mgr == 0) {
        return;
    }
    bit = *(unsigned int *)(mgr + 4) & 1;
    D_00204DF6 = bit;
    if (D_002001C8 != -1) {
        idx = D_002001C8;
    }
    if (*(unsigned int *)(mgr + 4) & 2) {
        p = (int *)(mgr + 0x10);
        if (D_00204DF6) {
            p = (int *)(mgr + 0x14);
        }
        cnt = *p++;
        if (idx < cnt) {
            p = (int *)p[idx];
            if (D_00204DF6) {
                p++;
            }
            if (D_00204DF6) {
                skip = *p++;
                p += skip;
            }
            if (D_00204DF6) {
                p++;
            }
            n = *p;
            func_0AF820(ref, scale, buf);
            p++;
            x = ax - func_0A9798(buf);
            y = ay - func_0A97C8(buf);
            for (i = 0; i < n; i++) {
                func_0AFCE8(*p, 0, x, y, 1.0f, 1.0f, 0.0f, w, scale);
                p++;
            }
        }
    }
}
