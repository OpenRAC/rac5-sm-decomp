/* LEVEL_22:0x130CF8 -- finds the slot holding an entity; otherwise claims the first empty slot and returns its index (0xFF when full). */

typedef struct {
    float vec[4][4];
    void *arr[4];
    int w[4];
    char pad0[0x30];
    unsigned char bytes[4];
    char pad1[0x19];
    unsigned char b_ad;
} Sub;

typedef struct {
    char pad0[0x58];
    Sub *sub58;
} Obj;

int func_130CF8(Obj *o, void *v, int flag)
{
    Sub *t;
    unsigned int i;
    unsigned int j;
    float *dst;
    float *src;

    t = o->sub58;
    for (i = 0; i < 4; i++) {
        if (t->arr[i] == v) {
            return (unsigned char)i;
        }
    }
    for (j = 0; j < 4; j++) {
        if (t->arr[j] == 0) {
            t->arr[j] = v;
            t->w[j] = 0;
            t->bytes[j] = 0;
            if (flag != 0) {
                t->b_ad = j;
            } else {
                dst = t->vec[j];
                src = (float *)((char *)v + 0x30);
                dst[0] = src[0];
                dst[1] = src[1];
                dst[2] = src[2];
            }
            return (unsigned char)j;
        }
    }
    return 0xFF;
}
