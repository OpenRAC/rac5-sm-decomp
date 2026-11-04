/* Candidate grid traversal setup at LEVEL_01.REL:0x1158B8.
 * This source is provisional until the complete linked body is identical.
 */
typedef struct {
    int flags;
    int first[3];
    int last[3];
    int step[3];
    float enter_t;
    float next_t[3];
    float advance_t[3];
} GridWalk;

typedef struct {
    char reserved[0x1c];
    int count[3];
    float cell[3];
    float low[3];
    float high[3];
} GridBounds;

extern int func_0011C410(float *upper, float *lower, const float *origin,
                          const float *direction, const float *center,
                          const float *half_size);
extern float D_00217708;

/* Reference-returning bounds helpers preserve the three candidate values. */
static __inline__ const int *larger_ref(const int *a, const int *b)
{
    return *a >= *b ? a : b;
}

static __inline__ const int *smaller_ref(const int *a, const int *b)
{
    return *a <= *b ? a : b;
}

int func_001158B8(GridWalk *walk, const float *origin,
                  const float *direction, const GridBounds *grid)
{
    float center[3], half_size[3];
    float upper, lower;
    float first_x, first_y, first_z;
    float last_x, last_y, last_z;
    float difference_x, difference_y, difference_z;
    float x_plane, y_plane, z_plane, cell;
    int x0[3], y0[3], z0[3], x1[3], y1[3], z1[3];

    center[0] = (grid->low[0] + grid->high[0]) * 0.5f;
    half_size[0] = center[0] - grid->low[0];
    center[1] = (grid->low[1] + grid->high[1]) * 0.5f;
    center[2] = (grid->low[2] + grid->high[2]) * 0.5f;
    half_size[1] = center[1] - grid->low[1];
    half_size[2] = center[2] - grid->low[2];
    if (!func_0011C410(&upper, &lower, origin, direction, center, half_size))
        return 0;

    lower -= 0.00001f;
    upper += 0.00001f;
    first_x = origin[0] + direction[0] * upper;
    first_y = origin[1] + direction[1] * upper;
    first_z = origin[2] + direction[2] * upper;
    last_x = origin[0] + direction[0] * lower;
    last_y = origin[1] + direction[1] * lower;
    last_z = origin[2] + direction[2] * lower;
    difference_x = last_x - first_x;
    difference_y = last_y - first_y;
    difference_z = last_z - first_z;
    walk->enter_t = upper;

    x0[2] = grid->count[0] - 1;
    y0[2] = grid->count[1] - 1;
    z0[2] = grid->count[2] - 1;
    x0[1] = 0;
    x0[0] = (int)((first_x - grid->low[0]) / grid->cell[0]);
    walk->first[0] = *smaller_ref(larger_ref(&x0[0], &x0[1]), &x0[2]);

    y0[1] = 0;
    y0[0] = (int)((first_y - grid->low[1]) / grid->cell[1]);
    walk->first[1] = *smaller_ref(larger_ref(&y0[0], &y0[1]), &y0[2]);

    z0[1] = 0;
    z0[0] = (int)((first_z - grid->low[2]) / grid->cell[2]);
    walk->first[2] = *smaller_ref(larger_ref(&z0[0], &z0[1]), &z0[2]);

    x1[1] = 0;
    x1[0] = (int)((last_x - grid->low[0]) / grid->cell[0]);
    walk->last[0] = *smaller_ref(larger_ref(&x1[0], &x1[1]), &x0[2]);

    y1[0] = (int)((last_y - grid->low[1]) / grid->cell[1]);
    y1[1] = 0;
    walk->last[1] = *smaller_ref(larger_ref(&y1[0], &y1[1]), &y0[2]);

    z1[1] = 0;
    z1[0] = (int)((last_z - grid->low[2]) / grid->cell[2]);
    walk->last[2] = *smaller_ref(larger_ref(&z1[0], &z1[1]), &z0[2]);

    walk->step[0] = 0;
    walk->step[1] = 0;
    walk->step[2] = 0;
    if (walk->first[0] == walk->last[0] &&
        walk->first[1] == walk->last[1] &&
        walk->first[2] == walk->last[2]) {
        walk->flags = 7;
        return 1;
    }

    walk->flags = 0;
    cell = grid->cell[0];
    x_plane = grid->low[0] + cell * (float)walk->first[0];
    y_plane = grid->low[1] + grid->cell[1] * (float)walk->first[1];
    z_plane = grid->low[2] + grid->cell[2] * (float)walk->first[2];
    if (difference_x < -0.00001f) {
        walk->step[0] = -1;
        walk->next_t[0] = (x_plane - first_x) * (1.0f / difference_x);
        walk->advance_t[0] = -grid->cell[0] * (1.0f / difference_x);
        if (walk->first[0] <= walk->last[0]) walk->flags = 1;
    } else if (difference_x > 0.00001f) {
        walk->step[0] = 1;
        walk->next_t[0] = ((x_plane + cell) - first_x) * (1.0f / difference_x);
        walk->advance_t[0] = grid->cell[0] * (1.0f / difference_x);
        if (walk->last[0] <= walk->first[0]) walk->flags = 1;
    } else {
        walk->flags = 1;
        walk->next_t[0] = D_00217708;
    }

    if (difference_y < -0.00001f) {
        walk->step[1] = -1;
        walk->next_t[1] = (y_plane - first_y) * (1.0f / difference_y);
        walk->advance_t[1] = -grid->cell[1] * (1.0f / difference_y);
        if (walk->last[1] >= walk->first[1]) walk->flags |= 2;
    } else if (difference_y > 0.00001f) {
        cell = grid->cell[1];
        walk->step[1] = 1;
        walk->next_t[1] = ((y_plane + cell) - first_y) * (1.0f / difference_y);
        walk->advance_t[1] = cell * (1.0f / difference_y);
        if (walk->first[1] >= walk->last[1]) walk->flags |= 2;
    } else {
        walk->flags |= 2;
        walk->next_t[1] = D_00217708;
    }

    if (difference_z < -0.00001f) {
        walk->step[2] = -1;
        walk->next_t[2] = (z_plane - first_z) * (1.0f / difference_z);
        walk->advance_t[2] = -grid->cell[2] * (1.0f / difference_z);
        if (walk->last[2] >= walk->first[2]) walk->flags |= 4;
    } else if (difference_z > 0.00001f) {
        cell = grid->cell[2];
        walk->step[2] = 1;
        walk->next_t[2] = ((z_plane + cell) - first_z) * (1.0f / difference_z);
        walk->advance_t[2] = cell * (1.0f / difference_z);
        if (walk->first[2] >= walk->last[2]) walk->flags |= 4;
    } else {
        walk->flags |= 4;
        walk->next_t[2] = D_00217708;
    }
    return 1;
}
