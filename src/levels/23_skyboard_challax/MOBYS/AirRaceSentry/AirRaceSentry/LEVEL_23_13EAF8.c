/* LEVEL_23:0x13EAF8 -- appends an object pointer to a 32-slot table, guarded by a float limit. */

struct RegTable {
    void *slot[32];
    int count;
};

struct Sub {
    char pad[0xAC];
    float v;
};

struct Obj {
    char pad[0x58];
    struct Sub *sub;
};

extern struct RegTable D_00363618;
extern char D_0013ED50[];
extern void func_077FF8();

void func_13EAF8(struct Obj *a0)
{
    int n = D_00363618.count;
    struct Sub *s = a0->sub;

    if (n < 0x20) {
        if (!(16384.0f < s->v)) {
            D_00363618.slot[n] = a0;
            if (D_00363618.count <= 0) {
                func_077FF8(a0, D_0013ED50, 1);
            }
            D_00363618.count++;
        }
    }
}
