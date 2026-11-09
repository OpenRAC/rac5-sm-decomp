/* LEVEL_04:0x1E28E0 -- clears four slots of an owner record, releasing each non-empty slot and the shared handle when it matches, then clears one flag byte. */

struct This1E28E0 {
    char pad00[0x6C];
    void *arr[4];
    char pad7C[0xD2 - 0x7C];
    unsigned char bD2;
};

extern int D_0020F858;
extern void func_09A948(void *p);

void func_1E28E0(struct This1E28E0 *t)
{
    unsigned int i;

    for (i = 0; i < 4; i++) {
        if (t->arr[i] != 0) {
            if ((int)t->arr[i] == D_0020F858) {
                D_0020F858 = 0;
            } else {
                func_09A948(t->arr[i]);
            }
            t->arr[i] = 0;
        }
    }
    t->bD2 = 0;
}
