/* LEVEL_08:0x209EB8 -- placement copy of LEVEL_04_1E28E0.c: clears four slots of an owner record, releasing each non-empty slot and the shared handle when it matches, then clears one flag byte. */

struct This1E28E0 {
    char pad00[0x6C];
    void *arr[4];
    char pad7C[0xD2 - 0x7C];
    unsigned char bD2;
};

extern int D_0023F258;
extern void func_09F8E0(void *p);

void func_209EB8(struct This1E28E0 *t)
{
    unsigned int i;

    for (i = 0; i < 4; i++) {
        if (t->arr[i] != 0) {
            if ((int)t->arr[i] == D_0023F258) {
                D_0023F258 = 0;
            } else {
                func_09F8E0(t->arr[i]);
            }
            t->arr[i] = 0;
        }
    }
    t->bD2 = 0;
}
