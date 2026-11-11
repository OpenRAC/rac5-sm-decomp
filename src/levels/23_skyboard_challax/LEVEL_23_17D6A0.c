/* LEVEL_23:0x17D6A0 -- placement copy of LEVEL_22_1309C0.c: runs one of two call sequences chosen by a helper result. */
struct Sub14 {
    char pad0[0xB0];
    unsigned char bB0;
};

struct Obj14 {
    char pad0[0x58];
    struct Sub14 *p58;
};

int func_0C0CA8(void);
void func_0B30D0(int v);
void func_17D710(struct Obj14 *p);
void *func_123C28(int id);
void func_0C0B58(void *a, void *b);

void func_17D6A0(struct Obj14 *a0)
{
    int r;
    void *p1;
    void *p2;

    r = func_0C0CA8();
    if (r != 0) {
        func_0B30D0(0x16);
        a0->p58->bB0 = 1;
        func_17D710(a0);
    } else {
        p1 = func_123C28(0x206);
        p2 = func_123C28(0x21A);
        func_0C0B58(p1, p2);
    }
}
