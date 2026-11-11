/* LEVEL_22:0x09CF48 -- placement copy of FRONTEND_0101D8.c: walks the selected entry's list in the menu block and sets up each item at the offset from the anchor point. */
extern char *D_0015B18C;
extern unsigned char D_0015B176;
extern int D_00156548;
extern void func_09CD18(int a, float s, float *out);
extern int func_096C90(float *v);
extern int func_096CC0(float *v);
extern void func_09D1E0(int item, int z, int x, int y, float a, float b, float c, int w, float d);

void func_09CF48(unsigned int idx, int ax, int ay, int ref, int w, float scale)
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

    mgr = D_0015B18C;
    if (mgr == 0) {
        return;
    }
    bit = *(unsigned int *)(mgr + 4) & 1;
    D_0015B176 = bit;
    if (D_00156548 != -1) {
        idx = D_00156548;
    }
    if (*(unsigned int *)(mgr + 4) & 2) {
        p = (int *)(mgr + 0x10);
        if (D_0015B176) {
            p = (int *)(mgr + 0x14);
        }
        cnt = *p++;
        if (idx < cnt) {
            p = (int *)p[idx];
            if (D_0015B176) {
                p++;
            }
            if (D_0015B176) {
                skip = *p++;
                p += skip;
            }
            if (D_0015B176) {
                p++;
            }
            n = *p;
            func_09CD18(ref, scale, buf);
            p++;
            x = ax - func_096C90(buf);
            y = ay - func_096CC0(buf);
            for (i = 0; i < n; i++) {
                func_09D1E0(*p, 0, x, y, 1.0f, 1.0f, 0.0f, w, scale);
                p++;
            }
        }
    }
}
