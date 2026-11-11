/* LEVEL_21:0x0F7468 -- a 12-byte vector copied into a global.
   The retail keeps the global's address in $a3: the lui spells the high half
   0x2F and the addiu the signed low half -0x3434, so the address is
   0x2ECBCC (the linker's %hi/%lo convention, not a truncation).
   The block moves in three pieces: eight bytes unaligned (ldl/ldr), then
   four bytes (lw/sw). */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern Vec3 D_002ECBCC;

void func_00F7468(Vec3 *src)
{
    D_002ECBCC = *src;
}
