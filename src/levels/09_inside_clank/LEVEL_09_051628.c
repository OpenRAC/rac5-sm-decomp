/* LEVEL_09:0x051628 -- placement copy of LEVEL_01_054F38.c: refreshes the object's position from its spare vector and publishes its transform block to the camera record. */
extern void func_1200A8(char *o, char *a, char *b, char *c, char *d);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void func_051628(char *o)
{
    char *cam;

    func_1200A8(o, o + 0x10, o + 0x200, o + 0x2F4, o);
    Copy3((float *)(o + 0x20), (float *)(o + 0x200));
    cam = *(char **)(o + 0x59C);
    *(float *)(cam + 0x20) = *(float *)(o + 0x20);
    *(float *)(cam + 0x24) = *(float *)(o + 0x24);
    *(float *)(cam + 0x28) = *(float *)(o + 0x28);
    *(float *)(cam + 0x2C) = *(float *)(o + 0x2C);
    *(float *)(cam + 0x00) = *(float *)(o + 0x00);
    *(float *)(cam + 0x04) = *(float *)(o + 0x04);
    *(float *)(cam + 0x08) = *(float *)(o + 0x08);
    *(float *)(cam + 0x0C) = *(float *)(o + 0x0C);
    *(float *)(cam + 0x10) = *(float *)(o + 0x10);
    *(float *)(cam + 0x14) = *(float *)(o + 0x14);
    *(float *)(cam + 0x18) = *(float *)(o + 0x18);
    *(float *)(cam + 0x1C) = *(float *)(o + 0x1C);
    *(float *)(cam + 0x30) = *(float *)(o + 0x30);
    *(float *)(cam + 0x34) = *(float *)(o + 0x34);
    *(float *)(cam + 0x38) = *(float *)(o + 0x38);
    *(float *)(cam + 0x3C) = *(float *)(o + 0x3C);
}
