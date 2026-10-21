/* LEVEL_24:0x14B180 -- take the position of the current object and drop it
   in the global, with the "in use" flag set one byte before the global.
   The position is a three-float copy: the retail emits it as a float
   quadword (ldl/ldr) plus the third float as a word. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern Vec3 D_35DEA4;
extern char *func_092280(int a, int b);

void func_14B180(void)
{
    Vec3 *pos = (Vec3 *)((char *)func_092280(0, 0) + 0x70);
    D_35DEA4 = *pos;
    *(char *)((char *)&D_35DEA4 - 4) = 1;
}
