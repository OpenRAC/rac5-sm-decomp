/* LEVEL_08.REL:0x0BDB90 -- parks the float argument at +0x14 of entry a0 (stride 0x20)
   of the table at 0x00376C98. */
typedef struct {
    unsigned char pad0[0x14];
    float v_14;
    unsigned char pad1[0x20 - 0x18];
} Ent;

extern Ent D_00376C98[];

void func_0BDB90(unsigned idx, float value)
{
    D_00376C98[idx].v_14 = value;
}
