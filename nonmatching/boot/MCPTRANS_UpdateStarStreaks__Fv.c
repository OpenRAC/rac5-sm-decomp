/* USA SCUS_976.15 boot: MCPTRANS_UpdateStarStreaks__Fv, 0x01E6A1E0.
 * Observed body: 268 bytes, followed by a padding word inside the 272-byte
 * interval.
 * Measured 26 November 2026: 268 bytes compiled; independent SN link:
 * 264/268 bytes equal under gnu-ee-trial (first differing byte 161) and
 * 254/268 under the default pinned route (first differing byte 8); the
 * other rebuilt profiles allocate the same way.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Reconstructed from the retail boot. It builds the negated gravity-like
 * vector, measures the angle between it and a reference vector, and unless a
 * flag is set and the angle exceeds 40 degrees (0.698 rad) it zeroes a local
 * vector, fills it from a global position, copies it, applies the drag motion
 * when the angle is under that limit, and hands the copy to a follow-up
 * routine.
 * Remaining difference: one float register swap in the second half. Retail
 * keeps the second limit constant in $f2 and the loaded x component in $f1;
 * this source gives the constant $f1 and x $f2 (same instruction order).
 * Under the pinned route the prologue also stores $f20 earlier.
 * The local-allocation dump explains it: after the first scheduling pass the
 * constant and x each live three instructions, so they tie on priority and
 * the constant, created first, takes the lower register. The retail
 * allocation appears as soon as the constant lives one instruction longer
 * than x (measured with a flag variable placed after the copy, which adds
 * code, and with the address of the copy kept out of the block, which
 * changes the program). The extra instruction in the scheduled block is the
 * address of the copy kept for the final call: the scheduler puts it first,
 * which pushes the base address of the position load ahead of the constant.
 * Load order, store order, limit locals, pointer locals, nested scopes,
 * passing the copy by value and moving the copy were all measured without
 * changing that schedule.
 * 28 November 2026, all 264/268 or worse under gnu-ee-trial: both comparison
 * spellings, early returns, an empty then-arm, file-scope and local const or
 * static limits, the limit as 40 * pi / 180 (same bits; a double literal
 * changes the bits), a statement-expression temporary modelling the C++
 * constructor and copy (same stack layout as retail, same allocation),
 * inline constructor or maker helpers (202 to 292 bytes), struct assignment,
 * memcpy (removes the copy), memset spellings, array or union views, and
 * both divpad routes. The constant and x tie on references and live length;
 * the constant wins because the first scheduling pass puts the copy's
 * destination address first, its register having been folded into the
 * block move. Reopen when a plain C shape keeps that destination in a
 * register used inside the block, or with a qualified C++ front end.
 */
typedef struct { float x, y, z; } VEC3;
extern VEC3 D_01F66F00;
extern VEC3 D_01F66F50;
extern struct { char pad[0x30]; VEC3 pos; } D_01F66C40;
extern unsigned char D_01EDE35C;
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
    if (D_01EDE35C == 0 || !(0.69813174f < ang)) {
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
