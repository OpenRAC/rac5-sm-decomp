/* LEVEL_01.REL:0x00A6C0: reviewed 56-byte candidate, held for ABI review.
 * Placement copy of LEVEL_02_00A6C0.c.
 * pinned C with gnu-ee-trial links 56/56 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_002108 returning void with (pointer, pointer, pointer,
 * float, float, float), but the accepted LEVEL_01_002108.c defines it
 * returning void with (float, float, float, pointer, pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad[0x30C];
    float f30C;
    char pad2[0x08];
    float f318;
    char pad3[0x08];
    float f324;
} S;

extern S *D_001EF254;

void func_002108(void *a0, void *a1, void *a2, float f12, float f13,
                 float f14);

void func_00A6C0(void)
{
    S *p = D_001EF254;

    func_002108((char *)p + 0x30, (char *)p + 0x2CC, (char *)p + 0x2F0,
                p->f30C, p->f318, p->f324);
}
