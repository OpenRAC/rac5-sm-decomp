/* LEVEL_08:0x0BDC78 -- placement copy of LEVEL_04_0B8590.c: claims a 32-byte table slot: marks it, asks the pair routine matching the global mode to accept the two values, clears the slot's flag when refused, then records the values and kind byte. */
typedef struct {
    int w0;
    int w4;
    char pad08[0x08];
    unsigned char b10;
    char pad11[0x07];
    int w18;
    int w1C;
} Slot;

extern Slot D_00376C98[];
extern char D_00376D98[];
extern int D_0024516C;

extern int func_0BDC50(int index);
extern void func_0B31C8(char *table, int *a, int *b);
extern int func_0B3218(char *table, int a, int b);

void func_0BDC78(int index, int a, int b, int kind, int unused, unsigned char flag)
{
    unsigned char keep;

    keep = flag;
    func_0BDC50(index);
    D_00376C98[index].w4 = 0xFF;
    switch (D_0024516C) {
    case 1:
        func_0B31C8(D_00376D98, &a, &b);
        break;
    case 0:
    default:
        if (func_0B3218(D_00376D98, a, b) == 0) {
            keep = 0;
            D_00376C98[index].w4 = 0;
        }
        break;
    }
    D_00376C98[index].w18 = a;
    D_00376C98[index].w1C = b;
    D_00376C98[index].w0 = keep;
    D_00376C98[index].b10 = kind;
}
