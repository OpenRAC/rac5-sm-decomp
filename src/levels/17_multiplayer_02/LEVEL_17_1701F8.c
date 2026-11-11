/* LEVEL_17:0x1701F8 -- placement copy of LEVEL_02_1B54B0.c: when a flag byte is clear, runs a setup helper and sets the flag, then passes the record through a float-scaled check and a follow-up helper. */

struct Sub;

struct Obj {
    char pad_00[0x45];
    unsigned char b_45;
    unsigned char b_46;
    char pad_47[0x58 - 0x47];
    struct Sub *p_58;
};

int func_070188(struct Obj *a0, int a1);
void func_070208(struct Obj *a0, int a1, float f12);
int func_17A100(struct Sub *a0, struct Obj *a1, float f12);
void func_16E838(struct Obj *a0, int a1, int a2);

void func_1701F8(struct Obj *a0)
{
    if (a0->b_46 == 0) {
        if (func_070188(a0, 0) != 0) {
            func_070208(a0, 2, 0.0f);
            a0->b_46 = 1;
        }
    }
    if (func_17A100(a0->p_58, a0, 0.5f) != 0) {
        func_16E838(a0, a0->b_45, 20);
    }
}
