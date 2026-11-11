/* LEVEL_22:0x1309C0 -- runs one of two call sequences chosen by a helper result. */
struct Sub14 {
    char pad0[0xB0];
    unsigned char bB0;
};

struct Obj14 {
    char pad0[0x58];
    struct Sub14 *p58;
};

int func_0B83B8(void);
void func_0AA7E0(int v);
void func_130A30(struct Obj14 *p);
void *func_109980(int id);
void func_0B8268(void *a, void *b);

void func_1309C0(struct Obj14 *a0)
{
    int r;
    void *p1;
    void *p2;

    r = func_0B83B8();
    if (r != 0) {
        func_0AA7E0(0x16);
        a0->p58->bB0 = 1;
        func_130A30(a0);
    } else {
        p1 = func_109980(0x206);
        p2 = func_109980(0x21A);
        func_0B8268(p1, p2);
    }
}
