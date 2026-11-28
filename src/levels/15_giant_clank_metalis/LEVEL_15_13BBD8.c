/* LEVEL_15:0x13BBD8 -- accumulates joint matrices up a parent chain. */
struct Joint {
    char pad[0x44];
    unsigned char parent;
    char pad45[0xB];
};
struct Skel {
    char pad[8];
    struct Joint *joints;
};
extern void func_13BB20(float *dst, char *src);
extern void func_0EC3A0(float *a, float *b, float *c);

void func_13BBD8(float *dst, struct Skel *skel, char *mats, int idx)
{
    float tmp[12];
    struct Joint *j;

    func_13BB20(dst, mats + idx * 0x30);
    for (;;) {
        j = &skel->joints[idx];
        idx = j->parent;
        if (idx == 0xFF)
            break;
        func_13BB20(tmp, mats + idx * 0x30);
        func_0EC3A0(dst, dst, tmp);
    }
}
