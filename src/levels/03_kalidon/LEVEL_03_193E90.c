/* LEVEL_03:0x193E90 -- when a small counter byte is below eight, copies two floats of the argument into two slot tables indexed by the counter and bumps the counter; then calls a helper on a local record, sets a flag bit in it and calls a second helper unless the first result is minus one. */

struct Obj {
    unsigned char pad0[0x54];
    unsigned char *p54;
};

int func_096890(unsigned char *buf);
void func_193D18(unsigned char *buf);
void func_193D68(int r, struct Obj *o, float *f);

void func_193E90(struct Obj *o, float *a1)
{
    unsigned char *p;
    unsigned char buf[16];
    int r;

    p = o->p54;
    if (p[0x44] < 8) {
        *(float *)(p + (p[0x44] << 2) + 0xAC) = a1[0];
        *(float *)(p + (p[0x44] << 2) + 0xCC) = a1[2];
        p[0x44]++;
    }
    func_193D18(buf);
    buf[10] |= 1;
    r = func_096890(buf);
    if (r != -1) {
        func_193D68(r, o, a1);
    }
}
