/* LEVEL_15:0x0FD858 -- stores one word and two 12-byte preset blocks into the object. */

struct Vec3 {
    int x;
    int y;
    int z;
};

extern struct Vec3 D_0016C628;
extern struct Vec3 D_0016C618;

void func_0FD858(char *a0, int a1)
{
    *(int *)(a0 + 0) = a1;
    *(int *)(a0 + 4) = 0;
    *(int *)(a0 + 8) = 0;
    *(struct Vec3 *)(a0 + 0xC) = D_0016C628;
    *(struct Vec3 *)(a0 + 0x18) = D_0016C618;
}
