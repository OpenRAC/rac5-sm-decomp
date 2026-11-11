/* LEVEL_18:0x09C038 -- placement copy of FRONTEND_0101D8.c: walks the selected entry's list in the menu block and sets up each item at the offset from the anchor point. */
extern char *D_001AB24C;
extern unsigned char D_001AB236;
extern int D_001A6608;
extern void func_09BE08(int a, float s, float *out);
extern int func_095D20(float *v);
extern int func_095D50(float *v);
extern void func_09C2D0(int item, int z, int x, int y, float a, float b, float c, int w, float d);

void func_09C038(unsigned int idx, int ax, int ay, int ref, int w, float scale)
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

    mgr = D_001AB24C;
    if (mgr == 0) {
        return;
    }
    bit = *(unsigned int *)(mgr + 4) & 1;
    D_001AB236 = bit;
    if (D_001A6608 != -1) {
        idx = D_001A6608;
    }
    if (*(unsigned int *)(mgr + 4) & 2) {
        p = (int *)(mgr + 0x10);
        if (D_001AB236) {
            p = (int *)(mgr + 0x14);
        }
        cnt = *p++;
        if (idx < cnt) {
            p = (int *)p[idx];
            if (D_001AB236) {
                p++;
            }
            if (D_001AB236) {
                skip = *p++;
                p += skip;
            }
            if (D_001AB236) {
                p++;
            }
            n = *p;
            func_09BE08(ref, scale, buf);
            p++;
            x = ax - func_095D20(buf);
            y = ay - func_095D50(buf);
            for (i = 0; i < n; i++) {
                func_09C2D0(*p, 0, x, y, 1.0f, 1.0f, 0.0f, w, scale);
                p++;
            }
        }
    }
}
