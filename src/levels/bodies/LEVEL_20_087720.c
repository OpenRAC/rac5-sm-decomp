/* LEVEL_20:0x087720 -- placement copy of FRONTEND_0101D8.c: walks the selected entry's list in the menu block and sets up each item at the offset from the anchor point. */
extern char *D_0010C4AC;
extern unsigned char D_0010C496;
extern int D_00107868;
extern void func_0874F0(int a, float s, float *out);
extern int func_081408(float *v);
extern int func_081438(float *v);
extern void func_0879B8(int item, int z, int x, int y, float a, float b, float c, int w, float d);

void func_087720(unsigned int idx, int ax, int ay, int ref, int w, float scale)
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

    mgr = D_0010C4AC;
    if (mgr == 0) {
        return;
    }
    bit = *(unsigned int *)(mgr + 4) & 1;
    D_0010C496 = bit;
    if (D_00107868 != -1) {
        idx = D_00107868;
    }
    if (*(unsigned int *)(mgr + 4) & 2) {
        p = (int *)(mgr + 0x10);
        if (D_0010C496) {
            p = (int *)(mgr + 0x14);
        }
        cnt = *p++;
        if (idx < cnt) {
            p = (int *)p[idx];
            if (D_0010C496) {
                p++;
            }
            if (D_0010C496) {
                skip = *p++;
                p += skip;
            }
            if (D_0010C496) {
                p++;
            }
            n = *p;
            func_0874F0(ref, scale, buf);
            p++;
            x = ax - func_081408(buf);
            y = ay - func_081438(buf);
            for (i = 0; i < n; i++) {
                func_0879B8(*p, 0, x, y, 1.0f, 1.0f, 0.0f, w, scale);
                p++;
            }
        }
    }
}
