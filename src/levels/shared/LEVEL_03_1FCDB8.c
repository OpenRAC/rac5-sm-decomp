/* LEVEL_03:0x1FCDB8 -- stores a reciprocal and converts four packed bytes to floats. */
struct P {
    float f0;
    int f4;
    unsigned int w;
};

void func_1FCDB8(struct P *p, unsigned int w)
{
    *(float *)((char *)p + 0xC) = 1.0f / p->f0;
    *(float *)((char *)p + 0x10) = (float)(p->w & 0xFF);
    *(float *)((char *)p + 0x14) = (float)((p->w >> 8) & 0xFF);
    *(float *)((char *)p + 0x18) = (float)((p->w >> 16) & 0xFF);
    *(float *)((char *)p + 0x1C) = (float)((p->w >> 24) & 0xFF);
}
