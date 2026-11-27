/* LEVEL_01:0x025120 -- applies a mode change to a slot if the owner matches. */
struct Slot {
    char pad[0x54];
    int mode;
};
extern int D_001F3FC4;
extern struct Slot *func_024628(int slot, int y);
extern int func_024F18(int index, int apply);
extern int func_027898(int id);
extern void func_027980(unsigned int a, int c, int d);

int func_025120(unsigned int a, int b, int c, int d)
{
    if (a < 0x19) {
        func_024628(a, c)->mode = b;
        if (D_001F3FC4 == -1 || D_001F3FC4 == c) {
            switch (b) {
            case 0:
            case 2:
                func_027980(a, c, b == 2);
                break;
            case 1:
                func_024F18(a, 1);
                if (d != 0)
                    ((int (*)(int id, int c))func_027898)(a, c);
                break;
            }
        }
        return 1;
    }
    return 0;
}
