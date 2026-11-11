/* LEVEL_19:0x159DA0 -- copies a 4x4 float block from the parent record into this record and into a second slot of the parent, then calls a helper. */

extern void func_15A578(void *self, int a, int b);

static __inline__ void CopyMat(float *d, float *s)
{
    d[8] = s[8];
    d[9] = s[9];
    d[10] = s[10];
    d[11] = s[11];
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
    d[4] = s[4];
    d[5] = s[5];
    d[6] = s[6];
    d[7] = s[7];
    d[12] = s[12];
    d[13] = s[13];
    d[14] = s[14];
    d[15] = s[15];
}

void func_159DA0(char *o)
{
    char *p;

    p = *(char **)(o + 0x58);
    CopyMat((float *)o, (float *)(p + 0x44));
    CopyMat((float *)(p + 0x84), (float *)(p + 0x44));
    func_15A578(o, 1, 0);
}
