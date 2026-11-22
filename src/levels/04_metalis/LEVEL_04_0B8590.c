/* LEVEL_04:0x0B8590 -- claims a 32-byte table slot: marks it, asks the pair routine matching the global mode to accept the two values, clears the slot's flag when refused, then records the values and kind byte. */
typedef struct {
    int w0;
    int w4;
    char pad08[0x08];
    unsigned char b10;
    char pad11[0x07];
    int w18;
    int w1C;
} Slot;

extern Slot D_00342218[];
extern char D_00342318[];
extern int D_0021576C;

extern int func_0B8568(int index);
extern void func_0ADAE0(char *table, int *a, int *b);
extern int func_0ADB30(char *table, int a, int b);

void func_0B8590(int index, int a, int b, int kind, int unused, unsigned char flag)
{
    unsigned char keep;

    keep = flag;
    func_0B8568(index);
    D_00342218[index].w4 = 0xFF;
    switch (D_0021576C) {
    case 1:
        func_0ADAE0(D_00342318, &a, &b);
        break;
    case 0:
    default:
        if (func_0ADB30(D_00342318, a, b) == 0) {
            keep = 0;
            D_00342218[index].w4 = 0;
        }
        break;
    }
    D_00342218[index].w18 = a;
    D_00342218[index].w1C = b;
    D_00342218[index].w0 = keep;
    D_00342218[index].b10 = kind;
}
