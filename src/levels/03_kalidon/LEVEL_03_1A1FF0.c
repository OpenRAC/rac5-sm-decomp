/* LEVEL_03:0x1A1FF0 -- reads a local float probe, sets a flag byte, then walks six pointer pairs. */
struct Loc {
    char pad_00[8];
    float f_08;
    char pad_0c[4];
};

struct P {
    char pad_00[0x9F];
    unsigned char b_9f;
    char pad_a0[0xE0 - 0xA0];
    void *arr_e0[6];
    void *arr_f8[6];
};

struct Obj {
    char pad_00[0x54];
    struct P *p_54;
};

extern void func_01A0B0(struct Loc *l);
extern void func_1A5B08(void *p);
extern void func_1A1C28(struct Obj *o);

void func_1A1FF0(struct Obj *o)
{
    struct Loc loc;
    struct P *p;
    unsigned char flag;
    unsigned int i;

    p = o->p_54;
    func_01A0B0(&loc);
    if (loc.f_08 < -90.0f) {
        flag = 0;
    } else {
        flag = 1;
    }
    p->b_9f = flag;
    i = 0;
    do {
        if (p->b_9f == 0) {
            func_1A5B08(p->arr_e0[i]);
        } else {
            func_1A5B08(p->arr_f8[i]);
        }
        i++;
    } while (i < 6);
    func_1A1C28(o);
}
