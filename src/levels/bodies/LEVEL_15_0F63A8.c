/* LEVEL_15:0x0F63A8 -- ages every live entry in the pool by one and swap-removes the ones that expire, then stores the new count. */

struct Ent {
    char pad_00[0x24];
    float f_24;
    char pad_28[0x34 - 0x28];
};

struct Pool {
    struct Ent e[2049];
    int count;
};

extern struct Pool D_002A8B58;

extern void func_0F8718(struct Ent *e);

void func_0F63A8(void)
{
    struct Ent *cur;
    struct Ent *end;
    float f;

    cur = &D_002A8B58.e[1];
    end = cur + D_002A8B58.count;
    while (cur != end) {
        f = cur->f_24 - 1.0f;
        if (f < 0.0f) {
            func_0F8718(cur);
            end--;
            *cur = *end;
        } else {
            cur->f_24 = f;
            cur++;
        }
    }
    D_002A8B58.count = end - &D_002A8B58.e[1];
}
