/* LEVEL_16:0x09D028 -- placement copy of FRONTEND_0101D8.c: walks the selected entry's list in the menu block and sets up each item at the offset from the anchor point. */
extern char *D_001A9DCC;
extern unsigned char D_001A9DB6;
extern int D_001A5188;
extern void func_09CDF8(int a, float s, float *out);
extern int func_096D10(float *v);
extern int func_096D40(float *v);
extern void func_09D2C0(int item, int z, int x, int y, float a, float b, float c, int w, float d);

void func_09D028(unsigned int idx, int ax, int ay, int ref, int w, float scale)
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

    mgr = D_001A9DCC;
    if (mgr == 0) {
        return;
    }
    bit = *(unsigned int *)(mgr + 4) & 1;
    D_001A9DB6 = bit;
    if (D_001A5188 != -1) {
        idx = D_001A5188;
    }
    if (*(unsigned int *)(mgr + 4) & 2) {
        p = (int *)(mgr + 0x10);
        if (D_001A9DB6) {
            p = (int *)(mgr + 0x14);
        }
        cnt = *p++;
        if (idx < cnt) {
            p = (int *)p[idx];
            if (D_001A9DB6) {
                p++;
            }
            if (D_001A9DB6) {
                skip = *p++;
                p += skip;
            }
            if (D_001A9DB6) {
                p++;
            }
            n = *p;
            func_09CDF8(ref, scale, buf);
            p++;
            x = ax - func_096D10(buf);
            y = ay - func_096D40(buf);
            for (i = 0; i < n; i++) {
                func_09D2C0(*p, 0, x, y, 1.0f, 1.0f, 0.0f, w, scale);
                p++;
            }
        }
    }
}
