/* LEVEL_05:0x0ACEF8 -- placement copy of FRONTEND_0101D8.c: walks the selected entry's list in the menu block and sets up each item at the offset from the anchor point. */
extern char *D_001EB18C;
extern unsigned char D_001EB176;
extern int D_001E6548;
extern void func_0ACCC8(int a, float s, float *out);
extern int func_0A6C40(float *v);
extern int func_0A6C70(float *v);
extern void func_0AD190(int item, int z, int x, int y, float a, float b, float c, int w, float d);

void func_0ACEF8(unsigned int idx, int ax, int ay, int ref, int w, float scale)
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

    mgr = D_001EB18C;
    if (mgr == 0) {
        return;
    }
    bit = *(unsigned int *)(mgr + 4) & 1;
    D_001EB176 = bit;
    if (D_001E6548 != -1) {
        idx = D_001E6548;
    }
    if (*(unsigned int *)(mgr + 4) & 2) {
        p = (int *)(mgr + 0x10);
        if (D_001EB176) {
            p = (int *)(mgr + 0x14);
        }
        cnt = *p++;
        if (idx < cnt) {
            p = (int *)p[idx];
            if (D_001EB176) {
                p++;
            }
            if (D_001EB176) {
                skip = *p++;
                p += skip;
            }
            if (D_001EB176) {
                p++;
            }
            n = *p;
            func_0ACCC8(ref, scale, buf);
            p++;
            x = ax - func_0A6C40(buf);
            y = ay - func_0A6C70(buf);
            for (i = 0; i < n; i++) {
                func_0AD190(*p, 0, x, y, 1.0f, 1.0f, 0.0f, w, scale);
                p++;
            }
        }
    }
}
