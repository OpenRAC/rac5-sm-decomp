/* LEVEL_02:0x15B4A8 -- take the position of the current object and drop it
   in the global, with the "in use" flag set one byte before the global.
   The position is a three-float copy: the retail emits it as a float
   quadword (ldl/ldr) plus the third float as a word. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern Vec3 D_3A9534;
extern char *func_09F9F8(int a, int b);

void func_15B4A8(void)
{
    Vec3 *pos = (Vec3 *)((char *)func_09F9F8(0, 0) + 0x70);
    D_3A9534 = *pos;
    *(char *)((char *)&D_3A9534 - 4) = 1;
}
