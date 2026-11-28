/* LEVEL_24:0x022EA0 -- placement copy of LEVEL_01_025120.c: applies a mode change to a slot if the owner matches. */
struct Slot {
    char pad[0x54];
    int mode;
};
extern int D_001C4C44;
extern struct Slot *func_022400(int slot, int y);
extern int func_022CF0(int index, int apply);
extern int func_0251C8(int id);
extern void func_0252B0(unsigned int a, int c, int d);

int func_022EA0(unsigned int a, int b, int c, int d)
{
    if (a < 0x19) {
        func_022400(a, c)->mode = b;
        if (D_001C4C44 == -1 || D_001C4C44 == c) {
            switch (b) {
            case 0:
            case 2:
                func_0252B0(a, c, b == 2);
                break;
            case 1:
                func_022CF0(a, 1);
                if (d != 0)
                    ((int (*)(int id, int c))func_0251C8)(a, c);
                break;
            }
        }
        return 1;
    }
    return 0;
}
