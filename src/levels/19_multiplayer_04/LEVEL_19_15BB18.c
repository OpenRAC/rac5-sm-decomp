/* LEVEL_19:0x15BB18 -- copies sixteen words of the object's source record into the object, then calls a helper with the object and two zero arguments. */
extern void func_15B170(char *a0, int a1, int a2);

void func_15BB18(char *a0)
{
    float *src;
    float *dst;

    src = (float *)(*(char **)(a0 + 0x58) + 0x18);
    dst = (float *)a0;
    dst[8] = src[8];
    dst[9] = src[9];
    dst[10] = src[10];
    dst[11] = src[11];
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = src[5];
    dst[6] = src[6];
    dst[7] = src[7];
    dst[12] = src[12];
    dst[13] = src[13];
    dst[14] = src[14];
    dst[15] = src[15];
    func_15B170(a0, 0, 0);
}
