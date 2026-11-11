/* LEVEL_15:0x1296D0 -- fills a texture record: size lookup, then sixteen packed coordinate words. */
extern unsigned int D_001AFE00[];
extern unsigned char D_00128AA8[];
extern void func_07A808(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern int func_07A9E0(void *buf);
extern int func_07B840(int index);
extern void func_07D2E8(int *x, int *y, unsigned int v);

static __inline__ void Dim(int h, int *px, int *py)
{
    unsigned int v;

    v = func_07B840(h);
    func_07D2E8(px, py, (v >> 16) & 0x7FF);
}

void func_1296D0(unsigned int *p)
{
    unsigned int buf[4];
    int dx, dy;
    unsigned int w;
    int x, y;

    w = p[0];
    w &= 0xF800FFFF;
    w |= D_001AFE00[p[1]] << 16;
    w &= 0xFFFFFFC3;
    w |= 4;
    w &= 0xFFFFFFFC;
    p[0] = w;
    func_07A808(buf, w, (unsigned int)D_00128AA8, 0x28, 0, -1, 0);
    p[16] = func_07A9E0(buf);
    Dim(p[16], &dx, &dy);
    x = dx / (int)p[14];
    y = dy / (int)p[15];
    p[0x1A] = ((x | (y << 16)) << 2);
    p[0x1B] = (y << 16) | (x << 2);
    p[0x1C] = x | (y << 18);
    p[0x1D] = (x | (y << 16));
    p[0x1E] = (y << 16) | ((x | (y << 17)) << 2);
    p[0x1F] = (y << 17) | ((x | (y << 16)) << 2);
    p[0x20] = (x | (y << 16)) | (y << 19);
    p[0x21] = (x | (y << 17)) | (y << 18);
    p[0x22] = x | (((x << 1) | (y << 16)) << 2);
    p[0x23] = (x | (y << 16)) | (x << 3);
    p[0x24] = (x << 1) | ((x | (y << 16)) << 2);
    p[0x25] = ((x << 1) | (y << 16)) | (x << 2);
    p[0x26] = (x | (y << 16)) | (((x << 1) | (y << 17)) << 2);
    p[0x27] = (x | (y << 17)) | (((x << 1) | (y << 16)) << 2);
    p[0x28] = ((x << 1) | (y << 16)) | ((x | (y << 17)) << 2);
    p[0x29] = ((x << 1) | (y << 17)) | ((x | (y << 16)) << 2);
}
