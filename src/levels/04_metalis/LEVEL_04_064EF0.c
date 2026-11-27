/* LEVEL_04:0x064EF0 -- placement copy of LEVEL_01_0634A0.c: initialises the object from the camera block: copies its transform, mirrors the position into two spare vectors and sets the mode half-words. */
extern int func_064C60(char *o);

static __inline__ void Copy4(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
}

void func_064EF0(char *o)
{
    char *cam;
    float *pos;
    float *a;
    float *b;

    func_064C60(o);
    cam = *(char **)(o + 0x59C);
    pos = (float *)(o + 0x20);
    a = (float *)(o + 0x200);
    b = (float *)(o + 0x210);
    *(float *)(o + 0x20) = *(float *)(cam + 0x20);
    *(float *)(o + 0x24) = *(float *)(cam + 0x24);
    *(float *)(o + 0x28) = *(float *)(cam + 0x28);
    *(float *)(o + 0x2C) = *(float *)(cam + 0x2C);
    *(float *)(o + 0x00) = *(float *)(cam + 0x00);
    *(float *)(o + 0x04) = *(float *)(cam + 0x04);
    *(float *)(o + 0x08) = *(float *)(cam + 0x08);
    *(float *)(o + 0x0C) = *(float *)(cam + 0x0C);
    *(float *)(o + 0x10) = *(float *)(cam + 0x10);
    *(float *)(o + 0x14) = *(float *)(cam + 0x14);
    *(float *)(o + 0x18) = *(float *)(cam + 0x18);
    *(float *)(o + 0x1C) = *(float *)(cam + 0x1C);
    *(float *)(o + 0x30) = *(float *)(cam + 0x30);
    *(float *)(o + 0x34) = *(float *)(cam + 0x34);
    *(float *)(o + 0x38) = *(float *)(cam + 0x38);
    *(float *)(o + 0x3C) = *(float *)(cam + 0x3C);
    Copy4(a, pos);
    Copy4(b, pos);
    *(short *)(o + 0x100) = 0x21;
    *(short *)(o + 0x102) = -1;
}
