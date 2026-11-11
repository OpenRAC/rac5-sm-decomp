/* LEVEL_16.REL:000480 -- returns the float at 0x10 of the record built by
   func_0005B0 for the global object D_001E4660. */
typedef struct {
    char pad_00[0x10];
    float f_10;
} Ret;

extern Ret *D_001E4660;

extern Ret *func_0005B0(Ret *a0);

float func_000480(void)
{
    return func_0005B0(D_001E4660)->f_10;
}
