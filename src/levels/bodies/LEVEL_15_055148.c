/* LEVEL_15:0x055148 -- placement copy of LEVEL_01_063EB8.c: on a zero probe result copies three floats and stores a float value; else sets defaults. */
struct G { char pad0[0x20]; int mode; char pad1[4]; float val; };
extern struct G D_00181288;
extern int func_03BC10(float, float, char *, float *, int, char *, int);

static __inline__ void copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void func_055148(char *record)
{
    struct { char pad[0x40]; float value; char work[12]; } s;
    if (func_03BC10(0.5f, 0.75f, record, &s.value, 0, s.work, 0) == 0) {
        copy3((float *)(record + 0x30), (float *)(record + 0x344));
        *(float *)(record + 0x2e0) = s.value;
    } else {
        D_00181288.mode = 3;
        D_00181288.val = 5.0000996589660645f;
        *(int *)(record + 0x1b8) = 0;
    }
}
