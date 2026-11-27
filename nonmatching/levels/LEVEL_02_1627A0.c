/* USA LEVEL_02:1627A0, 188-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: -fno-schedule-insns.
 * Compiled 188 bytes: 33 differing words; first difference +0x18. No matching credit.
 * Remaining issue: register/schedule: retail bumps the object register itself by 0x30 after the
 * x load (reproduced with a char* parameter stepped in place, 41 words under default scheduling)
 * and stores t.y twice (after the subtraction and after +1.313); best measured: plain field form
 * with -fno-schedule-insns, right length 188 B, 33 words
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_02:0x1627A0 -- probes a 3-float vector against an object's position and tests a planar radius. */
struct Vec3 {
    float x;
    float y;
    float z;
};

struct Obj {
    char pad[0x30];
    struct Vec3 pos;
};

extern void func_01AC80(struct Vec3 *v);

int func_1627A0(struct Obj *p)
{
    struct Vec3 t;

    func_01AC80(&t);
    t.x -= p->pos.x;
    t.y -= p->pos.y;
    t.y += 1.31299996f;
    t.z -= p->pos.z;
    if (0.4f < __builtin_fabsf(t.y)) {
        return 0;
    }
    return t.x * t.x + t.z * t.z < 2.25f;
}
