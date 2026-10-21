/* LEVEL_01:0x0958D0 -- RAC5 levels, 464-byte body, 20 placements.
 *
 * What it does: rectangle fill on a navigation grid.
 *
 *   The grid is a matrix of 8-byte cells whose u16 counter lives at +6.
 *   The two corners of a rectangle are given as 3D points (the grid lives
 *   on the XZ plane, so the point's x and z are used); the corners are
 *   converted to cell indices with floorf, the cell range is clamped to
 *   the grid, and every cell of the rectangle gets `delta` added to its
 *   u16 counter.  The function returns the total added.
 *
 * Where the form comes from:
 *   - The retail disassembly at LEVEL_01.REL:0x0958D0 was read instruction
 *     by instruction: four floorf calls, the clamps by min(), the two
 *     nested loops over the rectangle, and the return width*height*delta.
 *   - The point is a *three* float structure read at +0 and +8: the grid
 *     is on the ground plane of a 3D world, so the second coordinate is the
 *     point's z, not its y.  This is the form of the boot's own VEC3
 *     (master/src/boot/VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3.c:
 *     "typedef struct { float x; float y; float z; } VEC3;").
 *   - The final test is `height < 1 | width < 1`, in that order: the retail
 *     computes the height flag first and ORs the width flag into it
 *     (0x0959E4 slti / 0x0959E8 or / 0x0959EC bnez).  Swapping the two
 *     operands of the `|` is what makes the two integer temporaries land
 *     on $v0 and $v1 the way the retail does.
 *
 * Proof: *** EXACT *** at the twenty placements of the family
 * (LEVEL_01 0x0958D0, LEVEL_02 0x09BFA0, LEVEL_03 0x095500,
 * LEVEL_04 0x0989C8, LEVEL_05 0x092FC8, LEVEL_06 0x08E520,
 * LEVEL_07 0x097758, LEVEL_08 0x09D7F0, LEVEL_09 0x092028,
 * LEVEL_10 0x095C40, LEVEL_15 0x079790, LEVEL_16 0x0864B8,
 * LEVEL_17 0x086EF8, LEVEL_18 0x085E00, LEVEL_19 0x086968,
 * LEVEL_20 0x073CF0, LEVEL_21 0x079790, LEVEL_22 0x0866A0,
 * LEVEL_23 0x08B2F0, LEVEL_24 0x08E6D0), profile gnu-ee-trial-divpad.
 */
extern float floorf(float);

typedef struct {
    float x;
    float y;
    float z;
} VEC3;

typedef struct {
    unsigned char pad[6];
    unsigned short v;
} Cell;

typedef struct {
    int cols;                /* 0x00 : cells per row */
    int rows;                /* 0x04 : rows */
    VEC3 origin;             /* 0x08 : x at 0x08, z at 0x10 */
    unsigned char pad0[0x34 - 0x14];
    float sx;                /* 0x34 : x scale */
    float sy;                /* 0x38 : z scale */
} Grid;

int func_0958D0(Cell *base, Grid *g, VEC3 *p, VEC3 *q, int delta)
{
    float ax = p->x - g->origin.x - 0.5f;
    float ay = p->z - g->origin.z - 0.5f;
    float bx = q->x - g->origin.x + 0.5f;
    float by = q->z - g->origin.z + 0.5f;
    int cols = g->cols;
    int rows = g->rows;
    int left = 0;
    int top = 0;
    int right;
    int bottom;
    int width;
    int height;
    Cell *row;
    Cell *last;
    int i;

    i = (int)floorf(ax * g->sx);
    if (i > left)
        left = i;
    i = (int)floorf(ay * g->sy);
    if (i > top)
        top = i;
    right = (int)floorf(bx * g->sx) + 1;
    right = (right < cols) ? right : cols;
    bottom = (int)floorf(by * g->sy) + 1;
    bottom = (bottom < rows) ? bottom : rows;
    width = right - left;
    height = bottom - top;
    if (height < 1 | width < 1)
        return 0;

    row = base + top * cols + left;
    last = row + height * cols;
    while (row < last) {
        Cell *end = row + width;
        Cell *cell = row;
        while (cell < end) {
            cell->v += delta;
            cell++;
        }
        row += cols;
    }
    return width * height * delta;
}
