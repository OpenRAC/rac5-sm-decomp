/* LEVEL_08:0x182A50 -- placement copy of LEVEL_04_177260.c: tests a position against a collider, retrying with a corrected position. */
struct Q {
    float v[4];
};

struct Inner {
    char pad00[0x30];
    struct Q pos;
};

struct Info {
    struct Inner *inner;
    char pad04[0x150];
    int f154;
};

struct Obj {
    char pad00[0x58];
    struct Info *info;
};

extern void func_204488(struct Obj *, struct Q *, int);
extern int func_204660(struct Obj *, struct Q *, struct Q *, struct Q *, struct Q *);
extern int func_1BD470(int, struct Q *, struct Q *);
extern void func_204510(struct Obj *, struct Q *, int);

int func_182A50(struct Obj *self, int x)
{
    struct Q q0;
    struct Q q3;
    struct Q q1;
    struct Info *info;
    struct Q *p;
    int r;

    info = self->info;
    p = &info->inner->pos;
    func_204488(self, &q1, x);
    r = func_204660(self, &q0, &q3, p, &q1);
    if (func_1BD470(info->f154, p, &q1) != 0) {
        return 1;
    }
    if (r != 0) {
        return 0;
    }
    func_204510(self, &q0, x);
    func_204660(self, &q0, &q3, &q1, &q0);
    return func_1BD470(info->f154, &q1, &q0);
}
