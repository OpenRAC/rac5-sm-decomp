/* LEVEL_24:0x1730E0 -- scans the words of a counted list for a value, returning one when found. */
struct Sub22 {
    char pad0[4];
    unsigned int w4;
    char *list[1];
};

struct Obj22 {
    char pad0[0x58];
    struct Sub22 *p58;
};

int func_170DE8(char *v);

int func_1730E0(struct Obj22 *a0, int a1)
{
    unsigned int i;
    struct Sub22 *s2;

    s2 = a0->p58;
    for (i = 0; i < s2->w4; i++) {
        if (func_170DE8(s2->list[i]) == a1) {
            return 1;
        }
    }
    return 0;
}
