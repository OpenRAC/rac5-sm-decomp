/* LEVEL_01:0x10C5C0 -- stores a rolling record pointer for each of N entries and queues one helper call per entry. */

typedef struct {
    char pad_00[8];
    char f_08[0x40];
} Elem10C5C0;

extern char D_00206A70[];
extern void func_10C688(char *a, int b, int c, float d, float e, float f);

void func_10C5C0(char *a0, int a1, unsigned int a2, Elem10C5C0 *a3, float f12)
{
    char *base = D_00206A70 + (a1 << 7);
    unsigned int i;

    if (a3 == 0) {
        return;
    }
    if (a2 == 0) {
        return;
    }
    for (i = 0; i < a2; i++) {
        *(char **)(base + 0x68) = a3[i].f_08;
        func_10C688(a0, a1, 1, 0.0f, 0.0f, f12);
    }
}
