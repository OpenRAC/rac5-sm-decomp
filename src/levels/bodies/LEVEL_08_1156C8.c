/* LEVEL_08.REL:0x1156C8 -- blends the two floats at +0x18 and +0x20 of the
   second argument through the erased routine func_000000 and forwards the
   result, with the +0x24 sub-record's address, to func_115710.  The blend is
   held in a local float: inline, the compiler saves the +0x24 address across
   the first call instead of saving the source pointer and re-adding. */
typedef struct {
    unsigned char pad0[0x18];
    float v_18;
    unsigned char pad1[4];
    float v_20;
    unsigned char at_24;
} Src;

extern float func_000000(float a, float b);
extern void func_115710(void *a0, void *a1, float value);

void func_1156C8(void *a0, Src *a1)
{
    float blended = func_000000(a1->v_20, a1->v_18);

    func_115710(a0, &a1->at_24, blended);
}
