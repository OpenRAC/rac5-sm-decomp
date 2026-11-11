/* FRONTEND:0x0101D8 -- walks the selected entry's list in the menu block and sets up each item at the offset from the anchor point. */
extern char *D_0002FE1C;
extern unsigned char D_0002FE01;
extern int D_0002B1C8;
extern void func_010018(int a, float s, float *out);
extern int func_00B5E0(float *v);
extern int func_00B610(float *v);
extern void func_010470(int item, int z, int x, int y, float a, float b, float c, int w, float d);

void func_0101D8(unsigned int idx, int ax, int ay, int ref, int w, float scale)
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

    mgr = D_0002FE1C;
    if (mgr == 0) {
        return;
    }
    bit = *(unsigned int *)(mgr + 4) & 1;
    D_0002FE01 = bit;
    if (D_0002B1C8 != -1) {
        idx = D_0002B1C8;
    }
    if (*(unsigned int *)(mgr + 4) & 2) {
        p = (int *)(mgr + 0x10);
        if (D_0002FE01) {
            p = (int *)(mgr + 0x14);
        }
        cnt = *p++;
        if (idx < cnt) {
            p = (int *)p[idx];
            if (D_0002FE01) {
                p++;
            }
            if (D_0002FE01) {
                skip = *p++;
                p += skip;
            }
            if (D_0002FE01) {
                p++;
            }
            n = *p;
            func_010018(ref, scale, buf);
            p++;
            x = ax - func_00B5E0(buf);
            y = ay - func_00B610(buf);
            for (i = 0; i < n; i++) {
                func_010470(*p, 0, x, y, 1.0f, 1.0f, 0.0f, w, scale);
                p++;
            }
        }
    }
}
