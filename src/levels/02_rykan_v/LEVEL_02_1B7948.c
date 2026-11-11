/* LEVEL_02:0x1B7948 -- sets a flag byte once after two helper calls, then calls two helpers on the sub-record. */

struct Obj {
    char pad_00[0x45];
    unsigned char b_45;
    unsigned char b_46;
    char pad_47[0x54 - 0x47];
    char *p_54;
};

int func_0833A0(struct Obj *a0, int a1);
void func_083428(struct Obj *a0, int a1, float f12);
int func_1E2F48(char *a0, struct Obj *a1, float f12);
void func_1B5FC0(struct Obj *a0, int a1, int a2);

void func_1B7948(struct Obj *a0)
{
    if (a0->b_46 == 0 && func_0833A0(a0, 0) != 0) {
        func_083428(a0, 2, 0.0f);
        a0->b_46 = 1;
    }
    if (func_1E2F48(a0->p_54 + 0x30, a0, 0.5f) != 0) {
        func_1B5FC0(a0, a0->b_45, 0x12);
    }
}
