/* LEVEL_15:0x08F200 -- placement copy of FRONTEND_0101D8.c: walks the selected entry's list in the menu block and sets up each item at the offset from the anchor point. */
extern char *D_00150A8C;
extern unsigned char D_00150A76;
extern int D_0014BE48;
extern void func_08EFD0(int a, float s, float *out);
extern int func_088F48(float *v);
extern int func_088F78(float *v);
extern void func_08F498(int item, int z, int x, int y, float a, float b, float c, int w, float d);

void func_08F200(unsigned int idx, int ax, int ay, int ref, int w, float scale)
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

    mgr = D_00150A8C;
    if (mgr == 0) {
        return;
    }
    bit = *(unsigned int *)(mgr + 4) & 1;
    D_00150A76 = bit;
    if (D_0014BE48 != -1) {
        idx = D_0014BE48;
    }
    if (*(unsigned int *)(mgr + 4) & 2) {
        p = (int *)(mgr + 0x10);
        if (D_00150A76) {
            p = (int *)(mgr + 0x14);
        }
        cnt = *p++;
        if (idx < cnt) {
            p = (int *)p[idx];
            if (D_00150A76) {
                p++;
            }
            if (D_00150A76) {
                skip = *p++;
                p += skip;
            }
            if (D_00150A76) {
                p++;
            }
            n = *p;
            func_08EFD0(ref, scale, buf);
            p++;
            x = ax - func_088F48(buf);
            y = ay - func_088F78(buf);
            for (i = 0; i < n; i++) {
                func_08F498(*p, 0, x, y, 1.0f, 1.0f, 0.0f, w, scale);
                p++;
            }
        }
    }
}
