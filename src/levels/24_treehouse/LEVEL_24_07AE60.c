/* LEVEL_24.REL:07AE60 -- runs func_07AE90 then sets the float at 0xC of
   the second argument to one. */
typedef struct {
    char pad_00[0xC];
    float f_0C;
} Inner;

extern void func_07AE90(void *a0);

void func_07AE60(void *a0, Inner *a1)
{
    func_07AE90(a0);
    a1->f_0C = 1.0f;
}
