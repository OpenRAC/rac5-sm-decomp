/* LEVEL_15:0x0F9C58 -- walks an array of records whose count and base are read from the argument and calls a helper on each, then calls a finisher. */

struct Obj {
    char pad_00[0xEC];
    char *p_EC;
    int w_F0;
};

void func_11D5B0(char *p);
void func_0804B0(struct Obj *a0);

void func_0F9C58(struct Obj *a0)
{
    char *p;
    char *end;

    p = a0->p_EC;
    end = p + a0->w_F0 * 0x118;
    if (p != end) {
        do {
            func_11D5B0(p);
            p += 0x118;
        } while (p != end);
    }
    func_0804B0(a0);
}
