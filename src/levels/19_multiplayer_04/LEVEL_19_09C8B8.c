/* LEVEL_19:0x09C8B8 -- placement copy of FRONTEND_0101D8.c: walks the selected entry's list in the menu block and sets up each item at the offset from the anchor point. */
extern char *D_001AAF4C;
extern unsigned char D_001AAF36;
extern int D_001A6308;
extern void func_09C688(int a, float s, float *out);
extern int func_0965A0(float *v);
extern int func_0965D0(float *v);
extern void func_09CB50(int item, int z, int x, int y, float a, float b, float c, int w, float d);

void func_09C8B8(unsigned int idx, int ax, int ay, int ref, int w, float scale)
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

    mgr = D_001AAF4C;
    if (mgr == 0) {
        return;
    }
    bit = *(unsigned int *)(mgr + 4) & 1;
    D_001AAF36 = bit;
    if (D_001A6308 != -1) {
        idx = D_001A6308;
    }
    if (*(unsigned int *)(mgr + 4) & 2) {
        p = (int *)(mgr + 0x10);
        if (D_001AAF36) {
            p = (int *)(mgr + 0x14);
        }
        cnt = *p++;
        if (idx < cnt) {
            p = (int *)p[idx];
            if (D_001AAF36) {
                p++;
            }
            if (D_001AAF36) {
                skip = *p++;
                p += skip;
            }
            if (D_001AAF36) {
                p++;
            }
            n = *p;
            func_09C688(ref, scale, buf);
            p++;
            x = ax - func_0965A0(buf);
            y = ay - func_0965D0(buf);
            for (i = 0; i < n; i++) {
                func_09CB50(*p, 0, x, y, 1.0f, 1.0f, 0.0f, w, scale);
                p++;
            }
        }
    }
}
