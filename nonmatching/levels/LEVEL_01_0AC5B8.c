/* USA LEVEL_01.REL:0x0AC5B8. Retained C hypothesis, not a match.
 * The gnu-ee-trial profile links 1200 bytes against a 1196-byte candidate
 * body. First difference: body byte 12, callee-saved register allocation. */
typedef struct {
    short x;
    short y;
    short z;
} Point3s;

typedef struct {
    unsigned int tag;
    float x;
    float y;
    float z;
} SpriteVertex;

extern unsigned int D_001FBDE8;
extern unsigned int D_001FBDEC;
extern void func_0A9400(void);
extern void func_0A0928(int);
extern void func_0A4B30(int, const void *, unsigned int);
extern float cosf(float);
extern float sinf(float);
extern void *memset(void *, int, unsigned int);

void func_0AC5B8(float sx, float sy, float angle,
                 short center_x, short center_y, short width, short height,
                 unsigned int tag, unsigned int tag1, unsigned int tag2,
                 unsigned int tag3)
{
    Point3s points[4];
    unsigned int tags[4];
    Point3s current;
    Point3s *source = points;
    unsigned int *tag_source = tags;
    SpriteVertex *destination = (SpriteVertex *)0x70000000u;
    int xscale, yscale, cosine, sine;
    float f;
    int i;

    func_0A9400();
    if ((D_001FBDE8 & 4u) == 0 || (D_001FBDEC & 4u) != 0) {
        func_0A0928(9);
        D_001FBDEC &= 0xFFFFFFFBu;
        D_001FBDE8 |= 4u;
    }

    xscale = 0x800;
    if (sx != 1.0f) {
        xscale = 0;
        if (sx != 0.0f)
            xscale = ((int)((sx - (float)(int)sx) * 2047.0f)) |
                     ((int)sx << 11);
    }
    yscale = 0x800;
    if (sy != 1.0f) {
        yscale = 0;
        if (sy != 0.0f)
            yscale = ((int)((sy - (float)(int)sy) * 2047.0f)) |
                     ((int)sy << 11);
    }
    f = cosf(angle);
    cosine = 0x800;
    if (f != 1.0f) {
        cosine = 0;
        if (f != 0.0f)
            cosine = ((int)((f - (float)(int)f) * 2047.0f)) |
                     ((int)f << 11);
    }
    f = sinf(angle);
    sine = 0x800;
    if (f != 1.0f) {
        sine = 0;
        if (f != 0.0f)
            sine = ((int)((f - (float)(int)f) * 2047.0f)) |
                   ((int)f << 11);
    }

    width >>= 1;
    height >>= 1;
    memset(&points[0], 0, 6);
    points[0].x = -width;
    points[0].y = -height;
    memset(&points[1], 0, 6);
    points[1].x = width;
    points[1].y = -height;
    memset(&points[2], 0, 6);
    points[2].x = -width;
    points[2].y = height;
    memset(&points[3], 0, 6);
    points[3].x = width;
    points[3].y = height;

    tags[0] = tag;
    tags[1] = tag1;
    tags[2] = tag2;
    tags[3] = tag3;
    i = 3;
    do {
        int x, y, xr, yr;
        destination->tag = *tag_source;
        current = *source;
        if (xscale != 0x800)
            current.x = (short)((current.x * xscale) >> 11);
        if (yscale != 0x800)
            current.y = (short)((current.y * yscale) >> 11);
        x = current.x;
        if (cosine != 0x800)
            x = (current.x * cosine) >> 11;
        y = current.y;
        if (sine != 0x800)
            y = (current.y * sine) >> 11;
        yr = current.y;
        if (cosine != 0x800)
            yr = (current.y * cosine) >> 11;
        xr = current.x;
        if (sine != 0x800)
            xr = (current.x * sine) >> 11;
        x = (short)(center_x + x - y);
        y = (short)(center_y + yr + xr);
        destination->x = (float)x + 0.0f;
        destination->z = 0.0f;
        destination->y = (float)y + 0.0f;
        ++source;
        ++tag_source;
        ++destination;
        --i;
    } while (i >= 0);
    func_0A4B30(4, (const void *)0x70000000u, 0xFFFFFFu);
}
