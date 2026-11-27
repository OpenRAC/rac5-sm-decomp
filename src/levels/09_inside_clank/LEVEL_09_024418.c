/* LEVEL_09:0x024418 -- placement copy of LEVEL_01_025120.c: applies a mode change to a slot if the owner matches. */
struct Slot {
    char pad[0x54];
    int mode;
};
extern int D_001DDDC4;
extern struct Slot *func_023920(int slot, int y);
extern int func_024210(int index, int apply);
extern int func_0268A0(int id);
extern void func_026988(unsigned int a, int c, int d);

int func_024418(unsigned int a, int b, int c, int d)
{
    if (a < 0x19) {
        func_023920(a, c)->mode = b;
        if (D_001DDDC4 == -1 || D_001DDDC4 == c) {
            switch (b) {
            case 0:
            case 2:
                func_026988(a, c, b == 2);
                break;
            case 1:
                func_024210(a, 1);
                if (d != 0)
                    ((int (*)(int id, int c))func_0268A0)(a, c);
                break;
            }
        }
        return 1;
    }
    return 0;
}
