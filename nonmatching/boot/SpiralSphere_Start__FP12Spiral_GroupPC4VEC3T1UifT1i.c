/* USA SCUS_976.15 boot: SpiralSphere_Start at 0x01E76268.
 * The observed body is 364 bytes and ends at 0x01E763D4 (jr ra and its
 * delay slot); one zero alignment word follows. The words after it, through
 * the 0x01E76430 label, belong to other code and are outside this candidate.
 * Measured 28 November 2026 under rebuilt gnu-ee-trial, -O2 -G0, default GNU
 * assembler: 372 bytes, 246/364 equal, first difference at byte 184. The cc1
 * output matches the retail instruction for instruction; the GNU assembler adds a
 * coprocessor hazard nop after the hoisted 1.0f load before the
 * loop-top label, and the loop alignment then adds a second nop. The pinned
 * route also differs in the prologue save order, from byte 24.
 * The function creates the particle group, stores the spiral parameters, and
 * computes an unused endpoint difference. It then emits 32 joints, or 64 when
 * closed, at evenly spaced parameters.
 * Reopen with gnu-ee-trial cc1 plus the SN Ps2EeAs assembler (as=ps2eeas,
 * a route already used by level sources), or with any qualified assembler that
 * does not pad a hazard before a label.
 * Group field names are local; only the offsets are evidenced by this body.
 * Also measured 28 November 2026 with the SN Ps2EeAs assembler route
 * (as=ps2eeas): 360 bytes, 284 equal under gnu-ee-trial (257 under the
 * default route). It removes the hazard nop before the loop label but also
 * another nop retail keeps, so neither assembler reproduces this body.
 */
typedef struct { float x, y, z; } VEC3;
typedef struct { float t; } Spiral_Point;
typedef struct {
    char pad0[0x14];
    const VEC3 *from;
    const VEC3 *to;
    int f1C;
    float f20;
    float f24;
    unsigned int f28;
    const VEC3 *f2C;
    char pad30[4];
    int f34;
} Spiral_Group;
extern int gShrinkBeamHandle;
extern void Spiral_CreateGroup__FP12Spiral_Groupi(Spiral_Group *g, int count);
extern void Spiral_EmitJoint__FP12Spiral_GroupPC12Spiral_Pointb(Spiral_Group *g, const Spiral_Point *p, int flag);

void SpiralSphere_Start__FP12Spiral_GroupPC4VEC3T1UifT1i(Spiral_Group *g, const VEC3 *from, const VEC3 *to, unsigned int c, float f, const VEC3 *v, int closed)
{
    VEC3 d;
    Spiral_Point p;
    int n;
    int i;

    Spiral_CreateGroup__FP12Spiral_Groupi(g, gShrinkBeamHandle);
    n = 32;
    if (closed)
        n = 64;
    g->f28 = c;
    g->f20 = 3.14159265f;
    g->f24 = f;
    g->f2C = v;
    g->from = from;
    g->to = to;
    g->f1C = 0;
    g->f34 = closed;
    d.x = to->x - from->x;
    d.y = to->y - from->y;
    d.z = to->z - from->z;
    for (i = 0; i < n; i++) {
        p.t = closed ? (float)i / ((float)n - 1.0f) : (float)i / (float)n;
        Spiral_EmitJoint__FP12Spiral_GroupPC12Spiral_Pointb(g, &p, 0);
    }
}
