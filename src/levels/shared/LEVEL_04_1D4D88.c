/* LEVEL_04:0x1D4D88 -- appends a two-word record to a table, updates two flag bits on a target, and runs a hook when the table is flagged. */
typedef struct {
    void *f_00;
    void *f_04;
} Rec;

typedef struct {
    Rec f_00[8];
    void *f_40;
    unsigned char f_44;
    unsigned char f_45;
    unsigned char f_46;
} Tab;

typedef struct {
    char pad_00[0x58];
    Tab *f_58;
} Outer;

typedef struct {
    char pad_00[0x64];
    int f_64;
} Target;

typedef void (*Hook)(Target *a0, int a1);

void func_1D4D88(Outer *a0, Target *a1, Hook *a2, int a3)
{
    Tab *t;
    Hook fn;

    t = a0->f_58;
    t->f_00[t->f_44].f_00 = a1;
    t->f_00[t->f_44].f_04 = a2;
    if (a3 != 0) {
        t->f_40 = &t->f_00[t->f_44];
    }
    t->f_44 = t->f_44 + 1;
    a1->f_64 = a1->f_64 | 0x10;
    a1->f_64 = (a1->f_64 & ~0x20) | (((t->f_46 ^ 1) & 1) << 5);
    if (t->f_46 != 0) {
        fn = *a2;
        if (fn != 0) {
            fn(a1, 1);
        }
    }
}
