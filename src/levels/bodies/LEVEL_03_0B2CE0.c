/* LEVEL_03.REL:0x0B2CE0 -- parks the float argument at +0x14 of entry a0 (stride 0x20)
   of the table at 0x003428A8. */
typedef struct {
    unsigned char pad0[0x14];
    float v_14;
    unsigned char pad1[0x20 - 0x18];
} Ent;

extern Ent D_003428A8[];

void func_0B2CE0(unsigned idx, float value)
{
    D_003428A8[idx].v_14 = value;
}
