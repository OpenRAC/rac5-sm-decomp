/* LEVEL_02:0x1D4E78 -- when a query succeeds, stores a short result in a side record and forwards the object to two helpers. */

struct Obj {
    char pad_00[0x45];
    unsigned char b_45;
    char pad_46[0x54 - 0x46];
    struct Sub *p_54;
};

struct Sub {
    char pad_00[0x46];
    short h_46;
};

int func_0833A0(struct Obj *a0, int a1);
int func_1D4908(struct Obj *a0);
void func_1D4568(struct Obj *a0, int a1, int a2);

void func_1D4E78(struct Obj *a0)
{
    struct Sub *s1;
    int r;

    s1 = a0->p_54;
    r = func_0833A0(a0, 0);
    if (r != 0) {
        s1->h_46 = 15;
        r = func_1D4908(a0);
        func_1D4568(a0, a0->b_45, r & 0xFF);
    }
}
