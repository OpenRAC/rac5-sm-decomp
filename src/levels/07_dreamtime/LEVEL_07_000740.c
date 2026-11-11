/* LEVEL_07.REL:000740 -- returns the float at 0x10 of the record built by
   func_0008A8 for the global object D_0024B010. */
typedef struct {
    char pad_00[0x10];
    float f_10;
} Ret;

extern Ret *D_0024B010;

extern Ret *func_0008A8(Ret *a0);

float func_000740(void)
{
    return func_0008A8(D_0024B010)->f_10;
}
