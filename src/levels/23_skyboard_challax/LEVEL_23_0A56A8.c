/* LEVEL_23:0x0A56A8 -- placement copy of FRONTEND_0101D8.c: walks the selected entry's list in the menu block and sets up each item at the offset from the anchor point. */
extern char *D_001CF20C;
extern unsigned char D_001CF1F6;
extern int D_001CA5C8;
extern void func_0A5478(int a, float s, float *out);
extern int func_09F3F0(float *v);
extern int func_09F420(float *v);
extern void func_0A5940(int item, int z, int x, int y, float a, float b, float c, int w, float d);

void func_0A56A8(unsigned int idx, int ax, int ay, int ref, int w, float scale)
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

    mgr = D_001CF20C;
    if (mgr == 0) {
        return;
    }
    bit = *(unsigned int *)(mgr + 4) & 1;
    D_001CF1F6 = bit;
    if (D_001CA5C8 != -1) {
        idx = D_001CA5C8;
    }
    if (*(unsigned int *)(mgr + 4) & 2) {
        p = (int *)(mgr + 0x10);
        if (D_001CF1F6) {
            p = (int *)(mgr + 0x14);
        }
        cnt = *p++;
        if (idx < cnt) {
            p = (int *)p[idx];
            if (D_001CF1F6) {
                p++;
            }
            if (D_001CF1F6) {
                skip = *p++;
                p += skip;
            }
            if (D_001CF1F6) {
                p++;
            }
            n = *p;
            func_0A5478(ref, scale, buf);
            p++;
            x = ax - func_09F3F0(buf);
            y = ay - func_09F420(buf);
            for (i = 0; i < n; i++) {
                func_0A5940(*p, 0, x, y, 1.0f, 1.0f, 0.0f, w, scale);
                p++;
            }
        }
    }
}
