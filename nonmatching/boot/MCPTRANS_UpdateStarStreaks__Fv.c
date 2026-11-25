/* USA SCUS_976.15 boot: MCPTRANS_UpdateStarStreaks__Fv, 0x01E6A1E0.
 * Observed body: 268 bytes, followed by a padding word inside the 272-byte
 * interval.
 * Measured 17 November 2026: 268 bytes compiled; 63 of 67 instruction words
 * equal under gnu-ee-trial (59/67 under the default pinned route; sdk991111
 * 52/67; divpad 63/67); independent SN link: 263/268 equal with the first
 * differing byte at 84 under gnu-ee-trial, 253/268 with the first differing
 * byte at 8 under the default route.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Reconstructed from the retail boot. It builds the negated gravity-like
 * vector, measures the angle between it and a reference vector, and unless a
 * flag is set and the angle exceeds 40 degrees (0.698 rad) it zeroes a local
 * vector, fills it from a global position, copies it, applies the drag motion
 * when the angle is under that limit, and hands the copy to a follow-up
 * routine.
 * Remaining difference: only a float register swap in the second half (retail
 * keeps the limit constant in the higher register and the first loaded
 * component in the lower one; the compiled body has them the other way
 * round). Under the pinned route the prologue save order also differs.
 * Reopen when a source shape that changes the creation order of the second
 * limit constant relative to the loaded vector components is found, or when
 * the register allocator behaviour behind it is understood.
 */
typedef struct { float x, y, z; } VEC3;
extern VEC3 D_01F66F00;
extern VEC3 D_01F66F50;
extern struct { char pad[0x30]; VEC3 pos; } D_01F66C40;
extern unsigned char D_01EEE35C;
extern float VEC_AngleBetweenVectors__FPC4VEC3T0b(const VEC3 *, const VEC3 *, int);
extern void *memset(void *, int, unsigned int);
extern void GCSPAR_StreckSetDragMotion__FRC4VEC3(const VEC3 *);
extern void func_1E6BF80(const VEC3 *);

void MCPTRANS_UpdateStarStreaks__Fv(void) {
    VEC3 neg;
    VEC3 b;
    VEC3 a;
    float ang;
    neg.x = -D_01F66F00.x;
    neg.y = -D_01F66F00.y;
    neg.z = -D_01F66F00.z;
    ang = VEC_AngleBetweenVectors__FPC4VEC3T0b(&D_01F66F50, &neg, 0);
    if (D_01EEE35C == 0 || !(0.69813174f < ang)) {
        memset(&a, 0, 12);
        a.x = D_01F66C40.pos.x;
        a.y = D_01F66C40.pos.y;
        a.z = D_01F66C40.pos.z;
        b = a;
        if (ang < 0.69813174f)
            GCSPAR_StreckSetDragMotion__FRC4VEC3(&D_01F66F00);
        func_1E6BF80(&b);
    }
}
