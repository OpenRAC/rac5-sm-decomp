/* LEVEL_03:0x1D4068 -- records the target's extent (box, last polygon edge, ray along the facing or position and facing) in the effect block. */
struct Pt {
    float x;
    float y;
    float z;
    float w;
};

static __inline__ void SetSeg(float *d, float x, float z, float dx, float dz)
{
    d[0] = x;
    d[1] = z;
    d[2] = dx;
    d[3] = dz;
}

static __inline__ void AddScaled(float *d, float *a, float *b, float s)
{
    d[0] = a[0] + b[0] * s;
    d[1] = a[2] + b[2] * s;
}

void func_1D4068(char *o)
{
    float v[2];
    char *tgt;
    char *ctl;
    char *shape;
    float *box;
    char *mesh;
    struct Pt *pts;
    struct Pt *prev;
    struct Pt *last;
    unsigned int n;
    unsigned int st;

    tgt = *(char **)(o + 0x54);
    ctl = *(char **)(o + 0x58);
    shape = *(char **)(tgt + 0x48);
    if (shape != 0) {
        box = *(float **)(shape + 4);
        v[0] = box[4] - box[0];
        v[1] = box[6] - box[2];
        SetSeg((float *)(ctl + 0x30), box[0], box[2], v[0], v[1]);
        *(unsigned char *)(ctl + 0x78) = 0x16;
        return;
    }
    st = *(unsigned char *)(o + 0x45);
    if (st == 1) {
        mesh = *(char **)(tgt + 0x44);
        pts = *(struct Pt **)(mesh + 4);
        n = *(unsigned short *)(mesh + 0x14);
        last = &pts[n - 1];
        prev = &pts[n - 2];
        v[0] = last->x - prev->x;
        v[1] = last->z - prev->z;
        SetSeg((float *)(ctl + 0x30), last->x, last->z, v[0], v[1]);
        *(unsigned char *)(ctl + 0x78) = 0xC;
    } else if (st == 0) {
        SetSeg((float *)(ctl + 0x30), *(float *)(o + 0x30), *(float *)(o + 0x38), *(float *)(o + 0x20), *(float *)(o + 0x28));
        *(unsigned char *)(ctl + 0x78) = 0xC;
    } else if (st == 6) {
        AddScaled(v, (float *)(o + 0x30), (float *)(o + 0x20), 4.0f);
        SetSeg((float *)(ctl + 0x30), v[0], v[1], *(float *)(o + 0x20), *(float *)(o + 0x28));
        *(unsigned char *)(ctl + 0x78) = 0xC;
    } else {
        SetSeg((float *)(ctl + 0x30), *(float *)(o + 0x30), *(float *)(o + 0x38), *(float *)(o + 0x20), *(float *)(o + 0x28));
        *(unsigned char *)(ctl + 0x78) = 0xC;
    }
}
