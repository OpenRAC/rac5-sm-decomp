/* LEVEL_06:0x14B328 -- take the position of the current object and drop it
   in the global, with the "in use" flag set one byte before the global.
   The position is a three-float copy: the retail emits it as a float
   quadword (ldl/ldr) plus the third float as a word. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern Vec3 D_37ED94;
extern char *func_092038(int a, int b);

void func_14B328(void)
{
    Vec3 *pos = (Vec3 *)((char *)func_092038(0, 0) + 0x70);
    D_37ED94 = *pos;
    *(char *)((char *)&D_37ED94 - 4) = 1;
}
